/**
 * \file
 *
 * \brief Autosar ApplTemplates
 *
 * This file contains the implementation of the Autosar
 * module ApplTemplates.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */

/*==================[inclusions]=============================================*/
#include <Os.h>                     /* AUTOSAR OS*/
#include <EcuM.h>
#include <Dbg.h>

DeclareTask(Init_Task);
DeclareTask(Background_Task);


TASK(Init_Task)
{
    EcuM_StartupTwo();  /* InitTask has to set Startup Two*/
    EcuM_RequestRUN(0); /* Since no ComM or RunRequest from Application available RequestRun*/

    ActivateTask(Background_Task);

    TerminateTask();
}

TASK(Background_Task)
{
    while(1)
    {
      Dbg_MainFunction();
    }
	  
}

/** @} doxygen end group definition */
/*==================[end of file]============================================*/

