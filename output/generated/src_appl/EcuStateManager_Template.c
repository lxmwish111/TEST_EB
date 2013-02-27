/**
  * \file EcuStateManager_Template.c
  *
  * \brief Autosar RTE Runtime Environment
  *
  * This file contains an Rte component template / example code
  *
  * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
  *
  * Copyright 2005-2010 Elektrobit Automotive GmbH
  * All rights exclusively reserved for Elektrobit Automotive GmbH,
  * unless expressly agreed to otherwise.
  */

 /*
  * This file has been automatically generated by
  * tresos RTE Generator Version 5.0.17
  * on Wed Feb 27 10:02:51 CET 2013. !!!IGNORE-LINE!!!
  */

 /* \addtogroup RTE Runtime Environment
  * @{ */

#include "Rte_EcuStateManager.h"

/*------------------------[runnable entity skeletons]------------------------*/

Std_ReturnType EcuM_RequestRUN (EcuM_UserType PORTARG_EcuMUserConfig_0)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_ReleaseRUN (EcuM_UserType PORTARG_EcuMUserConfig_0)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_RequestPOST_RUN (EcuM_UserType PORTARG_EcuMUserConfig_0)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_ReleasePOST_RUN (EcuM_UserType PORTARG_EcuMUserConfig_0)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_SelectShutdownTarget (EcuM_StateType target, UInt8 mode)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_GetShutdownTarget (P2VAR(EcuM_StateType, AUTOMATIC, RTE_APPL_DATA) target, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) mode)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_GetLastShutdownTarget (P2VAR(EcuM_StateType, AUTOMATIC, RTE_APPL_DATA) target, P2VAR(UInt8, AUTOMATIC, RTE_APPL_DATA) mode)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_SelectBootTarget (EcuM_BootTargetType target)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_GetBootTarget (P2VAR(EcuM_BootTargetType, AUTOMATIC, RTE_APPL_DATA) target)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_SelectApplicationMode (OsAppModeType appMode)
{
  Std_ReturnType status = E_OK;

  return status;
}

Std_ReturnType EcuM_GetApplicationMode (P2VAR(OsAppModeType, AUTOMATIC, RTE_APPL_DATA) appMode)
{
  Std_ReturnType status = E_OK;

  return status;
}

void EcuM_MainFunction (void)
{
  Std_ReturnType status = E_OK;

}

/*
  ------------------------[runnable-independent API]-------------------------

  Copy and paste the following API to those runnable entity functions where
  you want to use them.

  ------------------------[Mode API]-----------------------------------------
  Rte_ModeType_EcuM_Mode mode;
  status = Rte_Switch_currentMode_currentMode(mode);
  Rte_ModeType_EcuM_Mode mode;
  status = Rte_Mode_currentMode_currentMode();

  ------------------------[port handle API]----------------------------------

  ------------------------[per instance memory API]--------------------------

  ------------------------[calibration]--------------------------------------

*/
/** @} doxygen end group definition */
/*==================[end of file]============================================*/
