#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
//
#include "../ChangeTheJ/src/ChangeTheJ/ChangeTheJ.h"
#include "../Fibonum/src/Fibonum/Fibonum.h"
#include "../Rock/src/Rock/Rock.h"
//
int main()
{
	int input;
	std::cout << "Choose the Function! \n----1-ChangeTheJ----\n----2-Fibonum-------\n----3-Rock-Game----\n----4-Exit----\n";
	std::cin >> input;
	if (input <= 3) {
		switch (input) {
			case 1: {
				std::cout << "----------------------ChangeTheJ----------------------\n";
				int des, cur, minus, times;
				ChangeTheJ(times, minus, des, cur);
			} break;
			case 2: {
				std::cout << "----------------------Fibonum----------------------\n";
				int counter;
				Fibonum(counter);
			} break;
			case 3: {
				std::cout << "--------------------Rock-Game--------------------\n";
				std::string input, change;
				int entry, choose;
				Rock game;
				game.Reader();
				game.Writer(input, change);
				while ((game.first + game.second) <= game.won)
					game.DoIt(entry, choose);
				switch (game.CurrSh) {
					case 1:
						std::cout << "\nPlayer1 won!! \n";
						break;
					case 2:
						std::cout << "\nPlayer2 won!! \n";
						break;
				}
			} break;
		}
	}
	else if (input == 4) {
		std::cout << "Goodbye!\n";
		return 0;
	}
	return 0;
}
