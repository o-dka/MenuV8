#include <iostream>
//
#include "ChangeTheJ.h"
void ChangeTheJ(int divn, int subn, int desn, int curn)
{
	std::cout << "please enter your current number\n";
	std::cin >> curn;
	std::cout << "please enter your desired number\n";
	std::cin >> desn;
	std::cout << "please enter the number you want to divide you current number to:\n";
	std::cin >> divn;
	std::cout << "please enter the number you want to subtract your current number from:\n";
	std::cin >> subn;
	while (curn != desn) {
		if (curn % divn == 0 && curn / divn >= desn) {
			curn /= divn;
			std::cout << "/" << divn << std::endl;
		}

		else {
			curn = curn - subn;
			std::cout << "-" << subn << std::endl;
		}
	}
}
