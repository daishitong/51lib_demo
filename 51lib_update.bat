@echo off

echo Get Lastest 51lib

cd /d %~dp0

xcopy ..\51lib\51lib_release .\51lib\ /S /D /Y