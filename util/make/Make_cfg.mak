# \file
#
# \brief Autosar Make
#
# This file contains the implementation of the Autosar
# module Make.
#
# \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
#
# Copyright 2005 - 2010 Elektrobit Automotive GmbH
# All rights exclusively reserved for Elektrobit Automotive GmbH,
# unless expressly agreed to otherwise.

#################################################################
## This makefile export paramters derived from the project
## data to make variables

# Only include these variables once
ifndef PROJECT_MODULES

# project name in workspace
TRESOS2_PROJECT_NAME  := simple_demo_can_dbg

TRESOS2_ECU_ID        := dbg-demo


# list of all enabled modules (including modules, that are NOT
# generated)
PROJECT_MODULES  := Make Base PduR Com EcuC SchM CanIf Os Det EcuM Rte Can Platforms Mcu Dbg
# add tresos2 make plugin
SOFTWARE_MODULES += tresos2

# add all standard modules, excluding Base/Make/Os which have to be added
# in a specific order
SOFTWARE_MODULES += $(sort $(filter-out Os, $(PROJECT_MODULES)))

# add Os if selected by the project
ifeq ($(findstring Os,$(PROJECT_MODULES)),Os)
SOFTWARE_MODULES += Os
endif

# variables defining module versions
Make_VARIANT         := TS_TxDxM3I2R0
Base_VARIANT         := TS_TxDxM4I2R0
PduR_VARIANT         := TS_TxDxM4I1R0
Com_VARIANT         := TS_TxDxM5I0R0
EcuC_VARIANT         := TS_TxDxM4I0R0
SchM_VARIANT         := TS_TxDxM4I0R0
CanIf_VARIANT         := TS_TxDxM5I0R0
Os_VARIANT         := TS_T19D1M4I2R0
Det_VARIANT         := TS_TxDxM5I0R0
EcuM_VARIANT         := TS_TxDxM4I1R0
Rte_VARIANT         := TS_TxDxM5I0R0
Can_VARIANT         := TS_T19D1M1I0R0
Platforms_VARIANT         := TS_T19D1M1I0R0
Mcu_VARIANT         := TS_T0D1M2I0R0
Dbg_VARIANT         := TS_TxDxM2I0R0

# target and derivate
TARGET              := WINDOWS
DERIVATE            := WIN32X86

# output path for generated files
GEN_OUTPUT_PATH  := $(PROJECT_ROOT)\output\generated

# output path for files created by the build environment
PROJECT_OUTPUT_PATH ?= $(GEN_OUTPUT_PATH)\..

# for compatibility reasons we need the AUTOSAR_BASE_OUTPUT_PATH
AUTOSAR_BASE_OUTPUT_PATH ?= $(GEN_OUTPUT_PATH)

endif





# Set Os Vendor to EB
OS_VENDOR := EB

