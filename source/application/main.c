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

/*==================[inclusions]============================================*/
#include <TSAutosar.h>
#include <Os.h>
#include <EcuM.h>
/*------------------[OS Main Function]--------------------------------------*/

/* freestanding C: this really is the signature of main() */
int main (void)
{
    Ecu_Init();    /* start OS never returns */
    return 0;
}


/*------------------[OS Hooks]----------------------------------------------*/

void ShutdownHook(StatusType errorID)
{
    /* endless loop? */
}

void ErrorHook(StatusType error)
{
    static uint8 a = 0;

    /* Figuring out the error code */
    switch (error)
    {
        case E_OS_ACCESS :
            /* place user code here */
            a++;
            break;
        case E_OS_CALLEVEL :
            /* place user code here */
            a++;
            break;
        case E_OS_ID :
            /* place user code here */
            a++;
            break;
        case E_OS_LIMIT :
            /* place user code here */
            a++;
            break;
        case E_OS_NOFUNC :
            /* place user code here */
            a++;
            break;
        case E_OS_RESOURCE :
            /* place user code here */
            a++;
            break;
        case E_OS_STATE :
            a++;
            /* place user code here */
            break;
        case E_OS_VALUE :
            /* place user code here */
            a++;
            break;
        default :
            /* place user code here */
            a++;
            break;
    }
} /* void ErrorHook(StatusType error) */

/*==================[internal function definitions]=========================*/


/** @} doxygen end group definition */
/*==================[end of file]===========================================*/
