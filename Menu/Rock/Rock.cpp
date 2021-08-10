#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
//
#include "Rock.h"
Rock::Rock()
{
	std::ifstream file(filename.c_str());
	std::getline(file, line);  // the line is inputed here 
	file.close();
	if (line[1] == '1') {
		two = 1;
		srand(time(0));
		second = std::rand() % 8;  // Second pile of rocks generated here , it is possible to get a second number equal to zero 
	}
	else {
		two = 0;
		second = 0;
	}
	add = std::stoi(line.substr(9));  // to add to 
	mult = std::stoi(line.substr(11)); // multiply by 
	first = std::stoi(line.substr(6, 7));  // first pile of rocks
	won = std::stoi(line.substr(3, 4)) + second; // how much rock you should have to win the game 
}
void Rock::Reader()
{
	std::ifstream fileChanger(filename.c_str());
	std::ifstream fileInfo(filenameInfo.c_str());
	getline(fileChanger, readChanger);
	for (int i = 0; i < 12; i++) {
		if (c == 5) // Because the fileInfo has only 5 lines, the function reads for five times, changing the line to the next one every time 
			break;
		getline(fileInfo, readInfo);
		if (readChanger[i + 1] == ' ')
			std::cout << readInfo << readChanger[i] << "\n\n"; // reads only one char if the next one is empty
		else {
			std::cout << readInfo << readChanger[i + 1] << readChanger[i + 2] << "\n\n"; // else , it reads the current one and the one after
			i += 2;
		}
		c++;
	}
}
void Rock::Writer(std::string input, std::string change)
{
	std::string choose, check;
	std::fstream fileC(filename.c_str());
	std::getline(fileC, input);
	std::getline(fileC, check);
	fileC.close();
	if (check == "1")  // checks if the file has been changed before
		std::cout << "Settings changed already, starting..\n";
	else {
		while (choose != "quit") {
		INPUT:
			std::cout << "what to change?\n";
			std::cin >> choose;
			std::cout << "what to change to ?\n";
			std::cin >> change;
			if (input.find(choose) < input.length())
				switch (change.length()) {
					case 1:
						input.replace(input.find(choose), 1, change);
						break;
					case 2:
						input.replace(input.find(choose), 2, change);
						break;
					default:
						std::cout << "------------\nYou can't do that!";
						goto INPUT;
						break;
				}
			std::cout << "Type quit to end, or type cont to continue changing. \n " << input << "\n";
			std::cin >> choose;
		}
		fileC.open("Changer.txt", std::ofstream::out | std::ofstream::trunc);  // deletes contents of a file, writes new ones
		fileC << input << "\n1";
		std::cout << "Changed to : \n"
			  << input << "\n";
		fileC.close();
	}
}

void Rock::DoIt(int entry, int choose)
{
	ct++;
	if (ct % 2 == 0) {
		CurrSh = 2;
		std::cout << "Player2 is now playing : \n\n";
	}
	else {
		CurrSh = 1;
		std::cout << "Player1 is now playing : \n\n";
	}
	std::cout << "What to do?\n1.To add \n2.To Multiply\n";
	std::cin >> entry;
	switch (entry) {
		case 1:	 // Summ of two numbers
			if (two == 1) {
				std::cout << "What Number to interact with?\n1. " << first << "\n2. " << second << "\n";
				std::cin >> choose;
				switch (
				    choose) {  // if there are two numbers, it ask which to interact with
					case 1:
						std::cout << add << "+" << first << "=";
						first += add;
						std::cout << first << "\n";
						break;
					case 2:
						std::cout << add << "+" << second << "=";
						second += add;
						std::cout << second << "\n";
						break;
				}
			}
			if (two == 0) {
				std::cout << add << "+" << first << "=";
				first += add;
				std::cout << first << "\n";
			}
			break;
		case 2:	 // Multiply
			if (two == 1) {
				std::cout << "What Number to interact with?\n1. " << first << "\n2. " << second << "\n";
				std::cin >> choose;
				switch (
				    choose) {  // if there are two numbers, it ask which to interact with
					case 1:
						std::cout << mult << "*" << first << "=";
						first = first * mult;
						std::cout << first << "\n";
						break;
					case 2:
						std::cout << mult << "*" << second << "=";
						second = second * mult;
						std::cout << second << "\n";
						break;
				}
			}
			if (two == 0) {
				std::cout << mult << "*" << first << "=";
				first *= mult;
				std::cout << first << "\n";
			}
			break;
	}
}
				
