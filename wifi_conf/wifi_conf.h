#ifndef __WIFI_CONF_H__
#define __WIFI_CONF_H__

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  smart_config
 *  Description:  开机时配置smartconfig
 *  @userid 获得用户id
 * =====================================================================================
 */
int smart_config(char *userid);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  connect_again_ap
 *  Description:  连接获得密码的wifi
 * =====================================================================================
 */
int connect_the_ap();

/* 
 * ===  FUNCTION  ======================================================================
 *  Name:  set_adhoc_mod
 *  Description: 设置wifi为adhoc模式
 * =====================================================================================
 */
int set_adhoc_mode();

/* 
 * ===  FUNCTION  ======================================================================
 *  Name:  set_ap_mod
 *  Description:  设置wifi为ap模式
 * =====================================================================================
 */
void set_ap_mode(void);
/* 
 * ===  FUNCTION  ======================================================================
 *  Name:  set_ap_mod
 *  Description:  设置wifi为sta模式
 * =====================================================================================
 */
void set_sta_mode(void);

extern int connect_ap_for_test();
extern int connect_smt_ap();
#endif
