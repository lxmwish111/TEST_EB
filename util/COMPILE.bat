@echo off

:: Note: Project setup - customer make environment
::       1. setup compiler path variable  TOOLPATH_COMPILER
::          in <ARCH>_<DERIVATE>_multi_cfg.mak
::       2. check configurations here in launch.bat
::          - TRESOS_BASE
::
:: uncomment line below if you do not set TRESOS_BASE over environment

SET TRESOS_BASE=C:\EB\tresos\2010b\

:: Call the optional launch_cfg.bat
:: This file optionally contains TARGET, DERIVATE and TRESOS_BASE.
:: These variables can also be implemented as environment variables.
if exist "launch_cfg.bat" call launch_cfg

:: set PROJECT_ROOT to the current project directory
SET PROJECT_ROOT=%CD%\..

:: check, if the path variables for PROJECT_ROOT is set
if not defined TRESOS_BASE GOTO missing_path_names_TRESOS_BASE
if not exist %TRESOS_BASE% GOTO missing_path_names_TRESOS_BASE

:: add %TRESOS_BASE%\bin to path
SET PATH=%PATH%;%TRESOS_BASE%\bin;
cmd /c "make depend"
if %errorlevel% neq 0 exit /b %errorlevel% 
cmd /c "make"
if %errorlevel% neq 0 exit /b %errorlevel% 
GOTO end

:: The variable TRESOS_BASE was not specified
:missing_path_names_TRESOS_BASE
ECHO.
ECHO    The variable TRESOS_BASE was not set correctly.
ECHO    Please specify this variable manually, by editing
ECHO    the batch file 'launch.bat'.
ECHO.
pause
GOTO end

:end