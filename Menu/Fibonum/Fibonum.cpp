#include <iostream>
//using namespace std;
//
#include "Fibonum.h"
void Fibonum(int count)
{
	long presentF;
	long pastF1;
	long pastF2;
	std::cout << "How much of the fibonachi number you want to see?\n";
	presentF = 1;
	pastF1 = 1, pastF2 = 1;
	std::cin >> count;
	if (count <= 93) {
		std::cout << pastF1 << "\n";
		for (int i = 3; i != count; i++) {
			presentF = pastF1 + pastF2;
			pastF1 = pastF2;
			pastF2 = presentF;
			std::cout << presentF << "\n";
		}
		std::cout << "Here is " << count << " of the fibonachi numbers\n";
	}
	else {
		std::cout << "Due to the limitations of 64 bit systems  we can't show you more than 93 fibonacci numbers,sorry :/\n";
	}
}
