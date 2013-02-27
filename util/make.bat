:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::
::
:: NAME:      $RCSfile: make.bat,v $, $Revision: 4320 $                                    
::
::
:: FUNCTION:  launches the GNU make. A user makefile and optional
::            parameter can be specified
::
:: USAGE:
::
::            make.bat [-f makefilename] [make_options] [target]
::                  -f           this parameter is optional. If -f is
::                               missing, a default makefile.mak is used
::                  make_options options of make.exe
::                  target       one of the make targets
::                               (listed when calling launch.bat)
::
::            make.bat help      print information on usage
::            make.bat -h
::            make.bat --h
::
::
:: PROJECT:   Autosar
::
:: TOOLCHAIN: GNU Make 3.74
::
:: Copyright (c) 2003 - 2009 Elektrobit Automotive GmbH
::  - all rights reserved -
::
::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::

@ECHO OFF


:: a help message is wanted
IF "%1"=="-h" GOTO need_help
IF "%1"=="--help" GOTO need_help
IF "%1"=="help" GOTO need_help
:: a user makefile is specified
IF "%1"=="-f" GOTO user_makefile

:: no user makefile is specified, use default file
GOTO default_make

:: output a help message on usage of make.bat
:need_help
ECHO.
ECHO.
ECHO    make.bat [-f makefilename] [make_options] [target]
ECHO          -f           this parameter is optional. If -f is
ECHO                       missing, a default makefile.mak is used
ECHO          make_options options of make.exe
ECHO          target       one of the make targets
ECHO                       (listed when calling launch.bat)
ECHO.
ECHO    make.bat help      print this message
ECHO    make.bat -h
ECHO    make.bat --help
ECHO.
ECHO.
GOTO end

:: a user makefile is specified
:user_makefile
CALL %TRESOS_BASE%/bin/make.exe %*
if %ERRORLEVEL% neq 0 exit /b 1
GOTO end

:: no user makefile is specified, take default
:default_make
CALL %TRESOS_BASE%/bin/make.exe -f Makefile.mak %*
if %ERRORLEVEL% neq 0 exit /b 1
GOTO end

:end
@echo on
echo %ERRORLEVEL%
:: End of make.bat
