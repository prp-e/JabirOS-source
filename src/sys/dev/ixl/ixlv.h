/******************************************************************************

  Copyright (c) 2013-2014, Intel Corporation 
  All rights reserved.
  
  Redistribution and use in source and binary forms, with or without 
  modification, are permitted provided that the following conditions are met:
  
   1. Redistributions of source code must retain the above copyright notice, 
      this list of conditions and the following disclaimer.
  
   2. Redistributions in binary form must reproduce the above copyright 
      notice, this list of conditions and the following disclaimer in the 
      documentation and/or other materials provided with the distribution.
  
   3. Neither the name of the Intel Corporation nor the names of its 
      contributors may be used to endorse or promote products derived from 
      this software without specific prior written permission.
  
  THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE 
  IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE 
  ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT OWNER OR CONTRIBUTORS BE 
  LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR 
  CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF 
  SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS 
  INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN 
  CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) 
  ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
  POSSIBILITY OF SUCH DAMAGE.

******************************************************************************/
/*$FreeBSD: stable/10/sys/dev/ixl/ixlv.h 270631 2014-08-25 22:04:29Z jfv $*/


#ifndef _IXLV_H_
#define _IXLV_H_

#define IXLV_AQ_MAX_ERR	100
#define IXLV_MAX_FILTERS	128
#define IXLV_MAX_QUEUES	16
#define IXLV_AQ_TIMEOUT	(1 * hz)
#define IXLV_CALLOUT_TIMO	(hz / 50)	// 20 msec

#define IXLV_FLAG_AQ_ENABLE_QUEUES            (u32)(1)
#define IXLV_FLAG_AQ_DISABLE_QUEUES           (u32)(1 << 1)
#define IXLV_FLAG_AQ_ADD_MAC_FILTER           (u32)(1 << 2)
#define IXLV_FLAG_AQ_ADD_VLAN_FILTER          (u32)(1 << 3)
#define IXLV_FLAG_AQ_DEL_MAC_FILTER           (u32)(1 << 4)
#define IXLV_FLAG_AQ_DEL_VLAN_FILTER          (u32)(1 << 5)
#define IXLV_FLAG_AQ_CONFIGURE_QUEUES         (u32)(1 << 6)
#define IXLV_FLAG_AQ_MAP_VECTORS              (u32)(1 << 7)
#define IXLV_FLAG_AQ_HANDLE_RESET             (u32)(1 << 8)
#define IXLV_FLAG_AQ_CONFIGURE_PROMISC	(u32)(1 << 9)
#define IXLV_FLAG_AQ_GET_STATS		(u32)(1 << 10)

/* printf %b arg */
#define IXLV_FLAGS \
    "\20\1ENABLE_QUEUES\2DISABLE_QUEUES\3ADD_MAC_FILTER" \
    "\4ADD_VLAN_FILTER\5DEL_MAC_FILTER\6DEL_VLAN_FILTER" \
    "\7CONFIGURE_QUEUES\10MAP_VECTORS\11HANDLE_RESET" \
    "\12CONFIGURE_PROMISC\13GET_STATS"

/* Driver state */
enum ixlv_state_t {
	IXLV_START,
	IXLV_FAILED,
	IXLV_RESET_REQUIRED,
	IXLV_RESET_PENDING,
	IXLV_VERSION_CHECK,
	IXLV_GET_RESOURCES,
	IXLV_INIT_READY,
	IXLV_INIT_START,
	IXLV_INIT_CONFIG,
	IXLV_INIT_MAPPING,
	IXLV_INIT_ENABLE,
	IXLV_INIT_COMPLETE,
	IXLV_RUNNING,	
};

struct ixlv_mac_filter {
	SLIST_ENTRY(ixlv_mac_filter)  next;
	u8      macaddr[ETHER_ADDR_LEN];
	u16     flags;
};
SLIST_HEAD(mac_list, ixlv_mac_filter);

struct ixlv_vlan_filter {
	SLIST_ENTRY(ixlv_vlan_filter)  next;
	u16     vlan;
	u16     flags;
};
SLIST_HEAD(vlan_list, ixlv_vlan_filter);

/* Software controller structure */
struct ixlv_sc {
	struct i40e_hw		hw;
	struct i40e_osdep	osdep;
	struct device		*dev;

	struct resource		*pci_mem;
	struct resource		*msix_mem;

	enum ixlv_state_t	init_state;

	/*
	 * Interrupt resources
	 */
	void			*tag;
	struct resource 	*res; /* For the AQ */

	struct ifmedia		media;
	struct callout		timer;
	struct callout		aq_task;
	int			msix;
	int			if_flags;

	struct mtx		mtx;
	struct mtx		aq_task_mtx;

	u32			qbase;
	u32 			admvec;
	struct timeout_task	timeout;
	struct task     	aq_irq;
	struct task     	aq_sched;
	struct taskqueue	*tq;

	struct ixl_vsi		vsi;

	/* Mac Filter List */
	struct mac_list		*mac_filters;

	/* Vlan Filter List */
	struct vlan_list	*vlan_filters;

	/* Promiscuous mode */
	u32			promiscuous_flags;

	/* Admin queue task flags */
	u32			aq_wait_count;
	u32			aq_required;
	u32			aq_pending;

	/* Virtual comm channel */
	enum i40e_virtchnl_ops	current_op;
	struct i40e_virtchnl_vf_resource *vf_res;
	struct i40e_virtchnl_vsi_resource *vsi_res;

	/* Misc stats maintained by the driver */
	u64			watchdog_events;
	u64			admin_irq;

	/* Signaling channels */
	u8			init_done;
	u8			config_queues_done;
	u8			map_vectors_done;
	u8			enable_queues_done;
	u8			disable_queues_done;
	u8			add_ether_done;
	u8			del_ether_done;
};

/*
** This checks for a zero mac addr, something that will be likely
** unless the Admin on the Host has created one.
*/
static inline bool
ixlv_check_ether_addr(u8 *addr)
{
	bool status = TRUE;

	if ((addr[0] == 0 && addr[1]== 0 && addr[2] == 0 &&
	    addr[3] == 0 && addr[4]== 0 && addr[5] == 0))
		status = FALSE;
	return (status);
}
	    
/*
** VF Common function prototypes
*/
int	ixlv_send_api_ver(struct ixlv_sc *);
int	ixlv_verify_api_ver(struct ixlv_sc *);
int	ixlv_send_vf_config_msg(struct ixlv_sc *);
int	ixlv_get_vf_config(struct ixlv_sc *);
void	ixlv_init(void *);
int	ixlv_reinit_locked(struct ixlv_sc *);
void	ixlv_configure_queues(struct ixlv_sc *);
void	ixlv_enable_queues(struct ixlv_sc *);
void	ixlv_disable_queues(struct ixlv_sc *);
void	ixlv_map_queues(struct ixlv_sc *);
void	ixlv_enable_intr(struct ixl_vsi *);
void	ixlv_disable_intr(struct ixl_vsi *);
void	ixlv_add_ether_filters(struct ixlv_sc *);
void	ixlv_del_ether_filters(struct ixlv_sc *);
void	ixlv_request_stats(struct ixlv_sc *);
void	ixlv_request_reset(struct ixlv_sc *);
void	ixlv_vc_completion(struct ixlv_sc *,
	enum i40e_virtchnl_ops, i40e_status, u8 *, u16);
void	ixlv_add_ether_filter(struct ixlv_sc *);
void	ixlv_add_vlans(struct ixlv_sc *);
void	ixlv_del_vlans(struct ixlv_sc *);
void	ixlv_update_stats_counters(struct ixlv_sc *,
		    struct i40e_eth_stats *);

#endif /* _IXLV_H_ */
