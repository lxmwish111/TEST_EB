/**
 * \file
 *
 * \brief Autosar Can
 *
 * This file contains the implementation of the Autosar
 * module Can.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]============================================*/

#include <Can.h>
#include <Can_Internal.h>

/*==================[macros]================================================*/

/*==================[type definitions]======================================*/

/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/
#if (CAN_NUM_HRH > 0)

#define CAN_START_SEC_CONST_8BIT
#include "MemMap.h"

CONST(uint8, CAN_CONST)Can_HrhLookUpTable[CAN_NUM_HRH] =
{
  0U, /* CanHardwareObject_Rx_0 */
  1U, /* CanHardwareObject_Dbg_Rx */
};

#define CAN_STOP_SEC_CONST_8BIT
#include "MemMap.h"

#endif /* (CAN_NUM_HRH > 0) */

#if (CAN_NUM_HRH + CAN_NUM_HTH > 0)

#define CAN_START_SEC_CONST_UNSPECIFIED
#include "MemMap.h"



CONST(Can_HohConfigType, CAN_CONST)Can_HohConfig[CAN_NUM_HRH + CAN_NUM_HTH] =
{

  {
    /* CanHardwareObject_Rx_0 */
    256U,
    CAN_ID_TYPE_STANDARD,
    CAN_OBJECT_TYPE_RECEIVE,
    2047U,
    0U
  },

  {
    /* CanHardwareObject_Dbg_Rx */
    257U,
    CAN_ID_TYPE_STANDARD,
    CAN_OBJECT_TYPE_RECEIVE,
    2047U,
    1U
  },

  {
    /* CanHardwareObject_Tx_0 */
    CAN_ID_UNUSED,
    CAN_ID_TYPE_UNUSED,
    CAN_OBJECT_TYPE_TRANSMIT,
    CAN_MASK_UNUSED,
    0U
  },

  {
    /* CanHardwareObject_Dbg_Tx */
    CAN_ID_UNUSED,
    CAN_ID_TYPE_UNUSED,
    CAN_OBJECT_TYPE_TRANSMIT,
    CAN_MASK_UNUSED,
    1U
  },

};

#define CAN_STOP_SEC_CONST_UNSPECIFIED
#include "MemMap.h"

#endif /* (CAN_NUM_HRH + CAN_NUM_HTH > 0) */
/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

/*==================[end of file]===========================================*/
