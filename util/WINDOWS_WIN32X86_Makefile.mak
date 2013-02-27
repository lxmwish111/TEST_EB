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
# BOARD:
# This variable defines the used hardware (it is called board because
# of the usage of evaluation boards).
#
# For example:
# BOARD = eva168_2
BOARD             ?= WIN32X86

#################################################################
# TARGET:
# default target of this project
TARGET      ?= WINDOWS
DERIVATE    ?= WIN32X86

#################################################################
# COMPIlER:
# The build structure of the SSC allows to switch the compiler by
# changing the used compiler plugin. A compiler plugin is a set
# of makefile that implements the "Compiler Makefile Interface".
# Up to four makefile belongs to such an interface. These makefiles are:
#
# $(PROJECT_ROOT)\util\<compiler_plugin>_cfg.mak
# $(PROJECT_ROOT)\core\plugins\<compiler_plugin>_check.mak
# $(PROJECT_ROOT)\core\plugins\<compiler_plugin>_defs.mak
# $(PROJECT_ROOT)\core\plugins\<compiler_plugin>_rules.mak
#
# The variable COMPILER must contain the name of one <compiler_plugin>.
#
# For example:
# COMPILER = tasking_st10
#
TOOLCHAIN ?= mgcc45
COMPILER ?= WINDOWS_WIN32X86_$(TOOLCHAIN)

#################################################################
# DEPEND_GCC_OPTS:
# The gcc compiler is used to solve the dependencies for all source
# files. The command -make depend- creates a dependency file for
# each source file in the folder [output/depend] Some source files
# contain preprocessor statements which will cause an error if an
# expected macro will not exists. Therefore the variable DEPEND_GCC_OPTS
# allows the definition of macros for the preprocessor of the gcc
# compiler. For example the following macros are necesary to build
# the dependecies for the modules hal and osek:
# osek: -D _MODEL="'s'"
# hal:  -D IO_CPU_FREQ_HZ=$(CPU_FREQUENCY)
# assembler: -x assembler-with-cpp
#
# ATTENTION:
# If the gcc reports any errors by calling the command make depend
# you must add own macros to the variable DEPEND_GCC_OPTS to solve this
# problem.
#
DEPEND_GCC_OPTS += -D_X86_ -D_WIN32
