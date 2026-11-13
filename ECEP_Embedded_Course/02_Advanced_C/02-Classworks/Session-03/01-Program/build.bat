@echo off
setlocal EnableExtensions

:: ==========================================
::          C PROGRAM BUILD SYSTEM
:: ==========================================

title C Programming - MSVC Build System
color 0A

set "SOURCE=Program.c"
set "OUTPUT=Program.exe"
set "OBJECT=Program.obj"

echo.
echo ==========================================
echo          C PROGRAMMING ENVIRONMENT
echo ==========================================
echo.

:: Check source file
if not exist "%SOURCE%" (
    echo [ERROR] Source file not found: %SOURCE%
    goto ERROR
)

:: Check compiler
where cl.exe >nul 2>&1
if errorlevel 1 (
    echo [ERROR] MSVC compiler not found.
    echo Run this from Developer Command Prompt.
    goto ERROR
)               

:: Clean previous build
echo [1/3] Cleaning previous build...
del /q "%OBJECT%" "%OUTPUT%" 2>nul

:: Compile
echo.
echo [2/3] Compiling %SOURCE%...
cl.exe /nologo /TC /W4 /std:c11 /c "%SOURCE%" /Fo:"%OBJECT%"

if errorlevel 1 (
    echo.
    echo [ERROR] Compilation failed!
    goto ERROR
)

:: Link
echo.
echo [3/3] Linking executable...
link.exe /NOLOGO "%OBJECT%" /OUT:"%OUTPUT%" /SUBSYSTEM:CONSOLE

if errorlevel 1 (
    echo.
    echo [ERROR] Linking failed!
    goto ERROR
)

:: Execute
echo.
echo ==========================================
echo          BUILD SUCCESSFUL
echo ==========================================
echo.

echo Running %OUTPUT%...
echo ------------------------------------------

"%OUTPUT%"
set "EXITCODE=%ERRORLEVEL%"

echo.
echo ------------------------------------------
echo Program exit code: %EXITCODE%
echo ==========================================

goto END

:ERROR
echo.
echo ==========================================
echo             BUILD FAILED
echo ==========================================
pause
exit /b 1

:END
echo.
pause
endlocal
