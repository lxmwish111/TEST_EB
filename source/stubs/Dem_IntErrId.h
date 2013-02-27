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

#if (!defined DEM_INTERRID_H)
#define DEM_INTERRID_H

#define CANIF_E_STOPPED                        (0x01U)
#define CANIF_E_FULL_TX_BUFFER                 (0x02U)
#define CANIF_E_INVALID_DLC                    (0x03U)

#define CANTP_E_COMM                           (0x04U)


#define CANSM_E_BUSOFF_NETWORK_0               (0x05U)

#define ECUM_E_RAM_CHECK_FAILED                (0x06U)
#define ECUM_E_ALL_RUN_REQUESTS_KILLED         (0x07U)
#define ECUM_E_CONFIGURATION_DATA_INCONSISTENT (0x08U)

#define CAN_E_TIMEOUT                          (0x09U)

#endif /* (!defined DEM_INTERRID_H) */
