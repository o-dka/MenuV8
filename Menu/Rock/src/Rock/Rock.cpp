#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
//
#include "Rock.h"
/*
    protected:
	int c = 0;
	int add;
	int mult;
	bool two;
	std::string line;
	std::string filenameInfo = "../Configs/ConfigInfo";
	std::string filename = "../Configs/ConfigChanger.txt";
	std::string readChanger, readInfo;
*/
Rock::Rock()
{
	std::ifstream file(filename.c_str());
	getline(file, line);// but the line is inputed here???
	file.close();
	if (line[0] == '1') {
		two = 1;
		srand(time(0));
		second = std::rand() % 8;  // Second number
	}
	else {
		two = 0;
		second = 0;
	}
	add = std::stoi(line.substr(8));  // Error here,says that line is empty, debugger also shows that its empty
	mult = std::stoi(line.substr(10));
	first = std::stoi(line.substr(5, 6));
	won = std::stoi(line.substr(2, 3)) + second;
}
void Rock::Reader()
{
	std::ifstream fileChanger(filename.c_str());
	std::ifstream fileInfo(filenameInfo.c_str());
	getline(fileChanger, readChanger);
	std::cout << "Shoudl be a line here --->  " << readChanger;
	for (int i = 0; i < 12; i++) {
		if (c == 5)
			break;
		getline(fileInfo, readInfo);
		if (readChanger[i + 1] == ' ')
			std::cout << readInfo << readChanger[i] << "\n\n";
		else {
			std::cout << readInfo << readChanger[i + 1] << readChanger[i + 2] << "\n\n";
			i += 2;
		}
		c++;
	}
	c = 0;
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
		fileC.open("Configs/ConfigChanger.txt", std::ofstream::out | std::ofstream::trunc);  // deletes contents of a file, writes new ones
		fileC << input << "\n1";
		std::cout << "Changed to : \n"
			  << input << "\n";
		fileC.close();
	}
}

void Rock::DoIt(int entry, int choose)
{
	c++;
	if (c % 2 == 0) {
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
						first += add;
						break;
					case 2:
						second += add;
						break;
				}
			}
			if (two == 0) {
				std::cout << add << "+" << first << "=";
				first += add;
				std::cout << first << "\n";
			}
			add = std::stoi(line.substr(8));
			break;
		case 2:	 // Multiply
			if (two == 1) {
				std::cout << "What Number to interact with?\n1. " << first << "\n2. " << second << "\n";
				std::cin >> choose;
				switch (
				    choose) {  // if there are two numbers, it ask which to interact with
					case 1:
						first = first * mult;
						break;
					case 2:
						second = second * mult;
						break;
				}
			}
			if (two == 0) {
				std::cout << mult << "*" << first
					  << "=";
				first *= mult;
				std::cout << first << "\n";
			}
			break;
	}
}