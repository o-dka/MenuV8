@echo off
title "MenuV8"
cmake  -G "Visual Studio 16 2019" -S Menu -B build
:: change the above Visual Studio version number to the one you have installed(i.e 16 2019 -> 15 2017)
cd  build && cmake --build . --config Release 
xcopy  Info  Release && xcopy Changer.txt  Release
cd Release
echo "path to exe:" "%cd%\Menu_V_Eigth.exe"
PAUSE
