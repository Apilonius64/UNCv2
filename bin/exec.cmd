@echo off
echo ==================================================
echo ###           UNCwx31 ExcecutionHelper         ###
echo ==================================================

echo [UNCwx31][ExcecutionHelper] Preparing eviroment ...
SET PATH=%PATH%;C:\Users\Henry\OneDrive\Softwareentwicklung\Cpp\.libs\wxWidgets-3.1.7-headers\lib\gcc_dll
echo [UNCwx31][ExcecutionHelper] Running excecutable ...
start /wait C:\Users\Henry\OneDrive\Softwareentwicklung\Cpp\UNCwx-vs\bin\UNCwx64.exe
echo [UNCwx31][ExcecutionHelper] Exit status: 
echo %ERRORLEVEL%
set /p DUMMY=Hit ENTER to continue...