#ifdef __cplusplus
extern "C"
{
#endif
/**
 * @code
 *  ___ _____ _   ___ _  _____ ___  ___  ___ ___
 * / __|_   _/_\ / __| |/ / __/ _ \| _ \/ __| __|
 * \__ \ | |/ _ \ (__| ' <| _| (_) |   / (__| _|
 * |___/ |_/_/ \_\___|_|\_\_| \___/|_|_\\___|___|
 * embedded.connectivity.solutions.==============
 * @endcode
 *
 * @file       opend_mgmt_api.h
 * @copyright  STACKFORCE GmbH, Heitersheim, Germany, www.stackforce.de
 * @author     Patrick Weber
 * @brief      openD management API.
 *
 * @defgroup   OPEND_MGMT_API openD Management API
 *             This module specifies the management API of openD connect.
 * \{
 */

#ifndef __OPEND_MGMT_API_H__
#define __OPEND_MGMT_API_H__

#include "opend_dataTypes.h"

/**
 * openD MgmtApi services.
 */
typedef enum openD_mgmtApi_service {
  /**
   * DectMode.
   */
  OPEND_MGMTAPI_DECTMODE,
  /**
   * Power down control.
   */
  OPEND_MGMTAPI_POWER_DOWN_CTRL,
  /**
   * Wake up.
   */
  OPEND_MGMTAPI_WAKE_UP,
  /**
   * Keep alive indication.
   */
  OPEND_MGMTAPI_KEEP_ALIVE,
} openD_mgmtApi_service_t;

/**
 * openD MgmtApi DectModes.
 */
typedef enum openD_mgmtApi_dectMode {
  /**
   * DectMode fix part.
   */
  OPEND_MGMTAPI_DECTMODE_FP,
  /**
   * DectMode portable part.
   */
  OPEND_MGMTAPI_DECTMODE_PP,
  /**
   * DectMode HAN-FUN.
   */
  OPEND_MGMTAPI_DECTMODE_HF,
  /**
   * DectMode 6LoWPAN.
   */
  OPEND_MGMTAPI_DECTMODE_SIXLOWPAN,
} openD_mgmtApi_dectMode_t;

/**
 * openD MgmtApi indication keepAlive structure.
 */
typedef struct mgmtApiInd_keepAlive {
  /**
   * Portable part MAC Identity (PMID).
   */
  pmid_t pmid;
} mgmtApiInd_keepAlive_t;

/**
 * openD MgmtApi request structure.
 */
typedef struct openD_mgmtApiReq {
  /**
   * MgmtApi request service.
   */
  openD_mgmtApi_service_t service;
  /**
   * openD MgmtApi request parameters.
   */
  union {
    /**
     * MgmtApi parameters for a dectMode request.
     */
    openD_mgmtApi_dectMode_t dectMode;
  } param;
} openD_mgmtApiReq_t;

/**
 * openD MgmtApi confirm structure.
 */
typedef struct openD_mgmtApiCfm {
  /**
   * MgmtApi confirm service.
   */
  openD_mgmtApi_service_t service;
  /**
   * MgmtApi service status.
   */
  openD_status_t status;
} openD_mgmtApiCfm_t;

/**
 * openD MgmtApi indication structure.
 */
typedef struct openD_mgmtApiInd {
  /**
   * MgmtApi indication service.
   */
  openD_mgmtApi_service_t service;

  /**
   * openD MgmtApi indication parameters.
   */
  union {
    /**
     * MgmtApi parameter for a keepAlive indication.
     */
    mgmtApiInd_keepAlive_t keepAlive;
  } param;
} openD_mgmtApiInd_t;

/**
 * openD MgmtApi primitives structure.
 */
typedef struct openD_mgmtApiPrimitives {
  /**
   * @brief   MgmtApi confirm primitive.
   *
   * @param   mConfirm Pointer of the management API confirm structure (@ref openD_mgmtApiCfm_t).
   */
  void ( *openD_mgmtApiCfm )( openD_mgmtApiCfm_t *mConfirm );
  /**
   * @brief   MgmtApi indication primitive.
   *
   * @param   mIndication Pointer of the management API indication structure (@ref openD_mgmtApiInd_t).
   */
  void ( *openD_mgmtApiInd )( openD_mgmtApiInd_t *mIndication );
} openD_mgmtApiPrimitives_t;

/**
 * @brief   openD management API initialization.
 *
 * @details DETAILED DESCRIPTION HERE.
 *
 * @param   mPrimitives Pointer of the management API primitives structure (@ref openD_mgmtApiPrimitives_t).
 *
 * @retval  openD_status_t Status of the operation (@ref openD_status_t).
 */
openD_status_t openD_mgmtApi_init( openD_mgmtApiPrimitives_t *mPrimitives );

/**
 * @brief   openD management API request.
 *
 * @details DETAILED DESCRIPTION HERE.
 *
 * @param   mRequest Pointer of the management API request structure (@ref openD_mgmtApiReq_t).
 *
 * @retval  openD_status_t Status of the operation (@ref openD_status_t).
 */
openD_status_t openD_mgmtApi_request( openD_mgmtApiReq_t *mRequest );


/*! @} defgroup OPEND_MGMT_API */

#endif /* __OPEND_MGMT_API_H__ */
#ifdef __cplusplus
}
#endif
