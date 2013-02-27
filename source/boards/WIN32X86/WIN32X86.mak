# \file
#
# \brief Autosar ApplTemplates
#
# This file contains the implementation of the Autosar
# module ApplTemplates.
#
# \author Elektrobit Automotive GmbH, 91058 Erlangen, Germany
#
# Copyright 2005 - 2010 Elektrobit Automotive GmbH
# All rights exclusively reserved for Elektrobit Automotive GmbH,
# unless expressly agreed to otherwise.

############ TOOLCHAIN mapping ##############
OS_TOOLCHAIN=$(TOOLCHAIN)

ifeq ($(TOOLCHAIN),gcc)
OS_TOOLCHAIN=gnu
endif

ifeq ($(TOOLCHAIN),bcgcc)
OS_TOOLCHAIN=gnu
endif

ifeq ($(TOOLCHAIN),gcc4)
OS_TOOLCHAIN=gnu
endif

ifeq ($(TOOLCHAIN),mgcc45)
OS_TOOLCHAIN=gnu
endif

#############################################

#################################################################
# DEFINITIONS



ifeq ($(OS_BOARD_DIR), )
OS_BOARD_DIR=$(BOARD_PROJECT_PATH)
endif

CC_INCLUDE_PATH      += $(OS_BOARD_DIR)
CPP_INCLUDE_PATH     += $(OS_BOARD_DIR)
ASM_INCLUDE_PATH     += $(OS_BOARD_DIR)

CC_FILES_TO_BUILD += $(OS_BOARD_DIR)\board.c \
							       $(OS_BOARD_DIR)\WINDOWS-ArchInitHardware.c


