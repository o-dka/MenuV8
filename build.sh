#!/bin/sh
echo "Checking if gcc,cmake and ninja are installed."
ncheck=$(which ninja)
cmcheck=$(which cmake)
gcheck=$(which g++)
mcheck=$(which make)
#gcorr=/usr/bin/g++
if [ "$gcheck" = "/usr/bin/g++" ]; then
	echo  "\nG++ found ,checking cmake." 
else
	echo -n "gcc not found, install build-essentials"
fi
if [ "$cmcheck" = "/usr/bin/cmake" ]; then
	echo  "\nCmake found ,checking ninja."
else
	echo -n "Cmake not found, install it!"
fi
if [ "$ncheck" = "/usr/bin/ninja" ]; then
	echo  "\nNinja found  starting compilation ..."
	 cmake -G Ninja -S Menu/ -B build/ && cd build && ninja
	echo "Check /build direcotory on Menu_V_Eight file, and launch it!"

else 
	echo"\n It appears that our end user didn't read the git repo, too bad, install ninja!!"

fi
