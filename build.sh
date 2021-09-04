#!/bin/sh
echo "Checking if gcc,cmake and ninja are installed."
ncheck=$(which ninja)
cmcheck=$(which cmake)
mcheck=$(which make)

if [ "$cmcheck" = "/usr/bin/cmake" ]; then
	echo  "\nCmake found ,checking ninja."
else
	echo -n "Cmake not found, install it!"
        break
fi
if [ "$ncheck" = "/usr/bin/ninja" ]; then
	echo  "\nNinja found  starting compilation ..."
	cmake -G Ninja -S Menu/ -B build/ && cd build && ninja
	echo "Check /build direcotory on Menu_V_Eight file, and launch it!"

else 
	echo "\n Ninja not found, install it!""
        break
fi
