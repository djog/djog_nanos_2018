--- loading
echo on
title Git Helper - Loading
echo Loading...
running = 1
ping localhost nul
cls
title Git Helper
:langchoose
--- Choose Lang
@echo off
cls
echo Git Helper
echo 1. Dutch/Nederlands
echo 2. English/Engels
set /p lang=Option/Optie: 
if %lang% == 1 goto dutch
if %lang% == 2 goto english
goto langchoose
:dutch
echo Dutch
pause
exit
:english
cls
echo Git Helper
echo 1. Sign in with GitHub
echo 2. Update/Pull
echo 3. Upload/Push
echo 4. Open Git Bash ---BETA---
echo 5. DANGER ZONE
set /p option=Option: 
if %option% == 1 goto signin
if %option% == 2 goto pull
if %option% == 3 goto push
if %option% == 4 goto openbash
if %option% == 5 goto warningdangerzone
goto english
:signin
start signin.sh
if %lang% == 1 goto dutch
if %lang% == 2 goto english
goto langchoose
:pull
start pull.sh
if %lang% == 1 goto dutch
if %lang% == 2 goto english
goto langchoose
:push
start push.sh
if %lang% == 1 goto dutch
if %lang% == 2 goto english
goto langchoose
:warningdangerzone
echo WARNING!
echo if you dont know what this is, dont do anything! still continue? Y/N
set /p dangerzone=
if %dangerzone% == Y goto dangerzone
if %dangerzone% == y goto dangerzone
goto langchoose
:dangerzone
echo {{{DANGER ZONE}}}
echo 1. {-FORCE PUSH-}
set /p dangerzone= {{{DANGER!}}} 
if %dangerzone% == 1 goto forcepush
goto langchoose
:forcepush
echo if you dont know what this is, dont do anything! still continue? Y/N
set /p dangerzone=
if %dangerzone% == Y goto startforcepush
if %dangerzone% == y goto startforcepush
goto langchoose
:startforcepush
start forcepush.sh







