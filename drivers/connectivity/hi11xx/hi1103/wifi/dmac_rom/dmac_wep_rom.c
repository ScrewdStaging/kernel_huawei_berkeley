


#ifdef __cplusplus
#if __cplusplus
extern "C" {
#endif
#endif


/*****************************************************************************
  1 ͷ�ļ�����
*****************************************************************************/
#include "wlan_spec.h"
#include "wlan_types.h"
#include "hal_ext_if.h"
//#include "mac_11i.h"
#include "dmac_wep.h"
#include "dmac_main.h"

#undef  THIS_FILE_ID
#define THIS_FILE_ID OAM_FILE_ID_DMAC_WEP_ROM_C

/*****************************************************************************
  2 ȫ�ֱ�������
*****************************************************************************/

/*****************************************************************************
  3 ����ʵ��
*****************************************************************************/

oal_void  dmac_wep_remove_key(mac_vap_stru *pst_mac_vap, oal_uint8 uc_key_id)
{
    hal_security_key_stru    st_wep_key         = {0};
    dmac_vap_stru           *pst_dmac_vap       = OAL_PTR_NULL;

    pst_dmac_vap = mac_res_get_dmac_vap(pst_mac_vap->uc_vap_id);
    if (OAL_PTR_NULL == pst_dmac_vap)
    {
        OAM_ERROR_LOG0(pst_mac_vap->uc_vap_id, OAM_SF_WEP, "{dmac_wep_remove_key::pst_dmac_vap null.}");

        return;
    }

    st_wep_key.uc_key_id     = uc_key_id;
    st_wep_key.en_key_type   = WLAN_KEY_TYPE_TX_GTK;
    st_wep_key.uc_lut_idx    = pst_dmac_vap->pst_hal_vap->uc_vap_id;

    /* дӲ���Ĵ���   */
    hal_ce_del_key(pst_dmac_vap->pst_hal_device, &st_wep_key);


}


oal_uint32  dmac_config_wep_add_entry(mac_vap_stru *pst_mac_vap, oal_uint8 uc_len, oal_uint8 *puc_param)
{
    hal_security_key_stru             st_wep_key         = {0};
    dmac_vap_stru                    *pst_dmac_vap       = OAL_PTR_NULL;
    mac_user_stru                    *pst_mac_user       = OAL_PTR_NULL;
    oal_uint8                        *puc_addr           = OAL_PTR_NULL;
    oal_uint32                        ul_ret;

    puc_addr = puc_param;

    pst_dmac_vap = mac_res_get_dmac_vap(pst_mac_vap->uc_vap_id);
    if (OAL_PTR_NULL == pst_dmac_vap)
    {
        OAM_ERROR_LOG0(pst_mac_vap->uc_vap_id, OAM_SF_WEP, "{dmac_config_wep_add_entry::pst_dmac_vap null.}");
        return OAL_ERR_CODE_PTR_NULL;
    }

    pst_mac_user =  (mac_user_stru *)mac_vap_get_user_by_addr(pst_mac_vap, puc_addr);
    if (OAL_PTR_NULL == pst_mac_user)
    {
        OAM_ERROR_LOG0(pst_mac_vap->uc_vap_id, OAM_SF_WEP, "{dmac_config_wep_add_entry::mac_user null.}");
        return OAL_ERR_CODE_PTR_NULL;
    }

    /* �����û��ķ��ͼ����׼�*/
    ul_ret = mac_user_update_wep_key(pst_mac_user, pst_mac_vap->us_multi_user_idx);
    if (OAL_SUCC != ul_ret)
    {
        OAM_ERROR_LOG1(pst_mac_vap->uc_vap_id, OAM_SF_WEP, "{dmac_config_wep_add_entry::mac_wep_add_usr_key FAIL[%d].}", ul_ret);
        return OAL_ERR_CODE_PTR_NULL;
    }

    st_wep_key.uc_key_id       = pst_mac_user->st_key_info.uc_default_index;
    st_wep_key.en_cipher_type  = pst_mac_user->st_key_info.en_cipher_type;
    st_wep_key.en_key_type     = WLAN_KEY_TYPE_PTK;
    st_wep_key.uc_lut_idx      = MAC_GET_DMAC_USER(pst_mac_user)->uc_lut_index;
    st_wep_key.en_update_key   = OAL_TRUE;
    st_wep_key.en_key_origin   = WLAN_AUTH_KEY;

    /*��Կ�Ѿ����ӹ�������Ҫ�ظ����ӣ�ֻ��Ҫ�����û�����*/
    st_wep_key.puc_cipher_key  = pst_mac_user->st_key_info.ast_key[st_wep_key.uc_key_id].auc_key;
    st_wep_key.puc_mic_key     = OAL_PTR_NULL;

#ifdef _PRE_WLAN_FEATURE_PROXYSTA
    if (mac_vap_is_vsta(pst_mac_vap))
    {
        /* ����proxysta������peer_macaddr��Ҫ����Ϊ����mac��ַ������ʱ�Ѿ����ù� */
        puc_addr = OAL_PTR_NULL;
    }
#endif

    /* дӲ���Ĵ���   */
    hal_ce_add_key(pst_dmac_vap->pst_hal_device, &st_wep_key, puc_addr);

    return OAL_SUCC;
}


oal_uint32  dmac_config_wep_remove_key(mac_vap_stru *pst_mac_vap, oal_uint8 uc_len, oal_uint8 *puc_param)
{
    oal_uint8                  uc_key_id;
    mac_removekey_param_stru  *puc_wep_key_prarm;

    puc_wep_key_prarm = (mac_removekey_param_stru *)puc_param;
    uc_key_id = puc_wep_key_prarm->uc_key_index;

	/*��ʼ��wep���MIB��Ϣ*/
    mac_mib_set_wep(pst_mac_vap, uc_key_id, WLAN_WEP_40_KEY_SIZE);

    /*��Ӳ��Lut��ɾ�� wep key */
    if(IS_STA(pst_mac_vap))
    {
        dmac_wep_remove_key(pst_mac_vap,uc_key_id);
    }

    return OAL_SUCC;

}




#ifdef __cplusplus
    #if __cplusplus
        }
    #endif
#endif

