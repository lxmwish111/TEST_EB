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
# Path to the cygwin compiler
ifneq ($(AC_CYGWIN_DOS),)
TOOLPATH_COMPILER ?= $(AC_CYGWIN_DOS)
else
TOOLPATH_COMPILER       ?= C:\cygwin
endif

#################################################################
# Define the options for the compiler
# see http://gcc.gnu.org/onlinedocs/gcc-3.4.6
# -std=iso9899:199409 strict compliance to ISO C, amendment 1
# -ffreestanding      assume freestanding C environment
# -pedantic           issue all warnings demanded by ISO C
# -Wall               activate long list of warnings
# -Wextra             quite a few warnings more
# -Wdeclaration-after-statement warns if declarations are mixed
# -Wundef             warns if an undefined identifier is evaluated by #if
# -Wshadow            when a local variable shadows another one
# -Wcast-qual         when a cv qualifier ist "cast away"
# -Wcast-align        whenever a pointer is cast and violates alignment
# -Wstrict-prototypes warn if a function is declared or defined without proper prototype
# -Wmissing-prototypes warn even if the definition is already a declaration
# -Wmissing-declarations if defined without being declared
# -Wredundant-decls   warn if something is declared twice even if delaration is compatible
# -Wnested-externs    warn if an extern declaration is encountered within a function
# -g3                 produce debugging output ready for gdb
# -O                  optimize, but don't take much time for it
# -fno-strict-aliasing disable strict aliasing optimization
CC_OPT                  += \
   -pipe -std=iso9899:199409 -ffreestanding \
   -pedantic -Wall -Wextra -Wdeclaration-after-statement -Wundef \
   -Wshadow -Wcast-qual -Wcast-align \
   -Wstrict-prototypes -Wmissing-prototypes -Wmissing-declarations \
   -Wredundant-decls -Wnested-externs \
   -DNOGDI -fno-strict-aliasing \
   -c -g3 -O -mno-cygwin -D_X86_ -D_WIN32X86_C_GCC_

#################################################################
# Define the default options for the assembler
ASM_OPT                 += -c

#################################################################
# Define the options for the linker
LINK_OPT                += -mno-cygwin

#################################################################
# define output files
MAP_FILE                = $(BIN_DIR)\$(PROJECT).map
OUT_FILE                = $(BUILD_DIR)\$(PROJECT).out
DEBUG                   = NO
