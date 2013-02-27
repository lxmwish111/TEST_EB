/**
 * \file
 *
 * \brief Autosar EcuM
 *
 * This file contains the implementation of the Autosar
 * module EcuM.
 *
 * \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
 *
 * Copyright 2005 - 2010 Elektrobit Automotive GmbH
 * All rights exclusively reserved for Elektrobit Automotive GmbH,
 * unless expressly agreed to otherwise.
 */
#if (!defined ECUM_CFG_H)
#define ECUM_CFG_H

/*==================[includes]==============================================*/

#include <os.h>                 /* Os public API, AppMode             */
#include <Std_Types.h>          /* AUTOSAR standard types */

#include <EcuM_Types.h>         /* static module types, EcuM_ConfigType */


/*==================[macros]================================================*/

/** \brief Switch for DET usage */
#define ECUM_DEV_ERROR_DETECT      STD_ON

#if (defined ECUM_INCLUDE_DET)
#error ECUM_INCLUDE_DET already defined
#endif
/** \brief Initialize Det module at startup **/
#define ECUM_INCLUDE_DET           STD_ON

#if (defined ECUM_INCLUDE_DEM)
#error ECUM_INCLUDE_DEM already defined
#endif
/** \brief Initialize Dem module at startup **/
#define ECUM_INCLUDE_DEM           STD_OFF

#if (defined ECUM_INCLUDE_NVM)
#error ECUM_INCLUDE_NVM already defined
#endif
/** \brief Initialize NvM module at startup **/
#define ECUM_INCLUDE_NVM           STD_OFF

#if (defined ECUM_INCLUDE_WDGM)
#error ECUM_INCLUDE_WDGM already defined
#endif
/** \brief Initialize WdgM module at startup **/
#define ECUM_INCLUDE_WDGM          STD_OFF

#if (defined ECUM_WDGM_MODES_CONFIGURED)
#error ECUM_WDGM_MODES_CONFIGURED already defined
#endif
/** \brief If WdgM modes are configured **/
#define ECUM_WDGM_MODES_CONFIGURED STD_OFF

#if (defined ECUM_INCLUDE_RTE)
#error ECUM_INCLUDE_RTE already defined
#endif
/** \brief Check if Rte is used in EcuM **/
#define ECUM_INCLUDE_RTE           STD_ON

#if (defined ECUM_USE_BOOTTARGET_SEC)
#error ECUM_USE_BOOTTARGET_SEC already defined
#endif
/** \brief Use special memory section for EcuM_BootTarget */
#define ECUM_USE_BOOTTARGET_SEC    STD_OFF

#if (defined ECUM_VERSION_INFO_API)
#error ECUM_VERSION_INFO_API already defined
#endif
/** \brief Initialize WdgM module at startup **/
#define ECUM_VERSION_INFO_API      STD_OFF

/*------------------[DEM/DET error configuration]---------------------------*/

#if (defined ECUM_PROD_ERR_RAM_CHECK_FAILURE)
#error ECUM_PROD_ERR_RAM_CHECK_FAILURE already defined
#endif
/** \brief Switch for DEM to DET reporting Ram Check Failure */
#define ECUM_PROD_ERR_RAM_CHECK_FAILURE                 TS_PROD_ERR_REP_TO_DET

#if (defined ECUM_PROD_ERR_ALL_RUN_REQUESTS_KILLED)
#error ECUM_PROD_ERR_ALL_RUN_REQUESTS_KILLED already defined
#endif
/** \brief Switch for DEM to DET reporting All Run Requests Killed */
#define ECUM_PROD_ERR_ALL_RUN_REQUESTS_KILLED           TS_PROD_ERR_REP_TO_DET

#if (defined ECUM_PROD_ERR_CFG_DATA_INCONSISTENT)
#error ECUM_PROD_ERR_CFG_DATA_INCONSISTENT already defined
#endif
/** \brief Switch for DEM to DET reporting Configuration Data Inconsistent
 **
 ** This preprocessor macro belongs to a feature which is not supported by the
 ** current implementation. It is available for completeness reasons only. */
#define ECUM_PROD_ERR_CFG_DATA_INCONSISTENT             TS_PROD_ERR_DISABLE

/** \brief DET error Id for Ram check failure */
#define ECUM_E_DEMTODET_RAM_CHECK_FAILED                30U

/** \brief DET error Id for All Run Requests Killed */
#define ECUM_E_DEMTODET_ALL_RUN_REQUESTS_KILLED         31U


/*------------------[User defined initialization switches]---------------------------*/

/** \brief Switch for usage of EcuM_Al_DriverInitZero */
#define ECUM_INITLIST_ZERO      STD_ON

/** \brief Switch for usage of EcuM_Al_DriverInitOne */
#define ECUM_INITLIST_ONE       STD_ON

/** \brief Switch for usage of EcuM_Al_DriverInitTwo */
#define ECUM_INITLIST_TWO       STD_ON

/** \brief Switch for usage of EcuM_Al_DriverInitThree */
#define ECUM_INITLIST_THREE     STD_OFF

/** \brief Switch for usage of EcuM_Al_DriverRestart */
#define ECUM_INITLIST_RESTART   STD_OFF

/*------------------[user defined wakeup sources]---------------------------*/


/*------------------[Sleep modes]-------------------------------------------*/

/** \brief number of sleep modes */
#define ECUM_SLEEPMODECONFIGNUM    1U

#if (defined ECUM_SLEEPMODE_0)
#error ECUM_SLEEPMODE_0 already defined
#endif
#define ECUM_SLEEPMODE_0 0x0U

/*------------------[Default AppMode]---------------------------------------*/

#if (defined ECUM_APPMODE_DEFAULT)
#error ECUM_APPMODE_DEFAULT already defined
#endif
/** \brief Default OS application mode */
#define ECUM_APPMODE_DEFAULT       OsAppMode_0

/*------------------[EcuM User Config]--------------------------------------*/

/** \brief Number of all users of the EcuM including Com channels and self
 * request */
#define  ECUM_USERNUM              2U

/** \brief Offest of ComM channel in range of user IDs */
#define  ECUM_COMMCHANNEL_OFFSET   2U

/** \brief Number of all users configued for the EcuM of the EcuM */
#define ECUM_ECUMUSERNUM           1U

/*------------------[Wakeup Sources]----------------------------------------*/

/* bit mask of all wakeup sources */
#define ECUM_WKSMASKALL            31U

/* bit mask of wakeup sources with no validation
 * All standard WKS require no validation */
#define ECUM_WKSMASKNOVAL          31U

/* bit mask of wakeup sources with ComM channel */
#define ECUM_WKSMASKCOMMCH         0U

/* number of wakeup sources */
#define ECUM_WKSCONFIGNUM          5U

/*------------------[OS Application Modes]--------------------------------*/

/* number of applictaion modes defined by OS */
#define ECUM_APPMODENUM            1U

/*------------------[Mcu Mode]-------------------------------------------*/

#define ECUM_NORMALMCUMODE         0U

/*------------------[EcuM configuration name]----------------------------*/

#define ECUM_CONFIG_NAME           EcuM_Config_0

/*==================[type definitions]======================================*/


/*==================[external function declarations]========================*/

/*==================[internal function declarations]========================*/

/*==================[external constants]====================================*/

/*==================[internal constants]====================================*/

/*==================[external data]=========================================*/

/*==================[internal data]=========================================*/

/*==================[external function definitions]=========================*/

/*==================[internal function definitions]=========================*/

#endif /* if !defined( ECUM_CFG_H ) */
/*==================[end of file]===========================================*/
