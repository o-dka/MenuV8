@echo off
title "Building MenuV8"
cd C:\User\MenuV8\
cmake  -G "Visual Studio 16 2019" -S C:/MenuV8/Menu -B C:/MenuV8/build
:: change the above Visual Studio version number to the one you have installed(i.e 16 2019 -> 15 2017)
cd  C:/MenuV8/build/ && cmake --build . --config Release 
move  Info  Release && move  Changer.txt  Release
echo "path to exe: C:\MenuV8\build\Release\Menu_V_Eigth.exe"
PAUSE
