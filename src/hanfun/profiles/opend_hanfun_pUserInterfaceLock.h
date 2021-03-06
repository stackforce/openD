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
 * @file       opend_hanfun_pUserInterfaceLock.h
 * @copyright  STACKFORCE GmbH, Heitersheim, Germany, www.stackforce.de
 * @author     Patrick Weber
 * @brief      openD HAN-FUN pUserInterfaceLock.
 *
 * @addtogroup OPEND_HANFUN_PROFILE
 * @{
 *
 * @defgroup   OPEND_HANFUN_PUSERINTERFACELOCK openD HAN-FUN pUserInterfaceLock
 *             This module specifies the HAN-FUN user interface lock profile.
 * @{
 */

#ifndef __OPEND_HANFUN_PUSERINTERFACELOCK_H__
#define __OPEND_HANFUN_PUSERINTERFACELOCK_H__

#include "../interfaces/opend_hanfun_iOnOff.h"

/**
 * openD Hanfun pUserInterfaceLock profile request structure.
 */
typedef openD_hanfun_iOnOffServerReq_t openD_hanfun_pUserInterfaceLockReq_t;

/**
 * openD Hanfun pUserInterfaceLock profile confirm structure.
 */
typedef openD_hanfun_iOnOffServerCfm_t openD_hanfun_pUserInterfaceLockCfm_t;

/**
 * openD Hanfun pUserInterfaceLock profile indication structure.
 */
typedef openD_hanfun_iOnOffServerInd_t openD_hanfun_pUserInterfaceLockInd_t;


/*! @} defgroup OPEND_HANFUN_PUSERINTERFACELOCK */

/*! @} addtogroup OPEND_HANFUN_PROFILE */

#endif /* __OPEND_HANFUN_PUSERINTERFACELOCK_H__ */
#ifdef __cplusplus
}
#endif
