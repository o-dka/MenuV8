@echo off
title "Building MenuV8"
cd "%cd%\MenuV8\"
cmake  -G "Visual Studio 16 2019" -S "%cd%/Menu" -B "%cd%/MenuV8/build"
:: change the above Visual Studio version number to the one you have installed(i.e 16 2019 -> 15 2017)
cd  "%cd%/build/" && cmake --build . --config Release 
xcopy  %cd%/build/Info cd%/build/Release/ && xcopy %cd%/build/Changer.txt  %cd%/build/Release/
cd Release
echo "path to exe:" "%cd%" "\MenuV8\build\Release\Menu_V_Eigth.exe"
PAUSE
