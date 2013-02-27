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

#################################################################
# Toolchain settings

#################################################################
# TOOLPATH_COMPILER:
# Path to the tasking compiler and linker.
TOOLPATH_COMPILER       ?= "C:\Programme\Microsoft Visual Studio 8\VC"

#################################################################
# Path and name of the debugger

DEBUGGER  	             = "C:\Programme\Microsoft Visual Studio 8\Common7\IDE\VCExpress.exe"

#################################################################
# Define the options for the compiler
CC_OPT                  += \
   /D "WIN32" /D "_DEBUG" /D "_CONSOLE" /D "_MBCS" /EHsc /RTC1 /MTd /W3 /nologo /c /Wp64 /Zi \
   -I"C:\Programme\Microsoft Platform SDK for Windows Server 2003 R2\Include" \
   /Fd"$(PROJECT_ROOT)\output\bin\vc80.pdb"
   

#################################################################
# Define the default options for the assembler
ASM_OPT                 += 

#################################################################
# Define the options for the linker
LINK_OPT                += /LIBPATH:"C:\Programme\Microsoft Platform SDK for Windows Server 2003 R2\Lib"

#################################################################
# define output files
MAP_FILE                = $(BIN_DIR)\$(PROJECT).map
OUT_FILE                = $(BUILD_DIR)\$(PROJECT).out
DEBUG                   = NO


DEPEND_GCC_OPTS += -D_X86_ -D_WIN32