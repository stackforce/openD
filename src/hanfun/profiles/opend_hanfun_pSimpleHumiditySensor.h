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
 * @file       opend_hanfun_pSimpleHumiditySensor.h
 * @copyright  STACKFORCE GmbH, Heitersheim, Germany, www.stackforce.de
 * @author     Patrick Weber
 * @brief      openD HAN-FUN pSimpleHumiditySensor.
 *
 * @addtogroup OPEND_HANFUN_PROFILE
 * @{
 *
 * @defgroup   OPEND_HANFUN_PSIMPLEHUMIDITYSENSOR openD HAN-FUN pSimpleHumiditySensor
 *             This module specifies the HAN-FUN simple humidity sensor profile.
 * @{
 */

#ifndef __OPEND_HANFUN_PSIMPLEHUMIDITYSENSOR_H__
#define __OPEND_HANFUN_PSIMPLEHUMIDITYSENSOR_H__

#include "../interfaces/opend_hanfun_iSimpleHumidity.h"

/**
 * openD Hanfun pSimpleHumiditySensor profile request structure.
 */
typedef openD_hanfun_iSimpleHumidityServerReq_t openD_hanfun_pSimpleHumiditySensorReq_t;

/**
 * openD Hanfun pSimpleHumiditySensor profile confirm structure.
 */
typedef openD_hanfun_iSimpleHumidityServerCfm_t openD_hanfun_pSimpleHumiditySensorCfm_t;


/*! @} defgroup OPEND_HANFUN_PSIMPLEHUMIDITYSENSOR */

/*! @} addtogroup OPEND_HANFUN_PROFILE */

#endif /* __OPEND_HANFUN_PSIMPLEHUMIDITYSENSOR_H__ */
#ifdef __cplusplus
}
#endif
