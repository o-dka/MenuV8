#pragma once
#include <cstdlib>
#include <fstream>
#include <iostream>
#include <string>
class Rock {
    private:
	int c = 0, ct = 0; // line counter and player counter 
	int add = 0, mult = 0;
	bool two = 0;
	std::string filenameInfo = "Info";
	std::string filename = "Changer.txt";
	std::string readChanger, readInfo, line;

    public:
	Rock();
	void Reader();
	void Writer(std::string input, std::string change);
	void DoIt(int entry, int choose);
	int won = 0, first = 0, second = 0;
	int CurrSh = 1; // the game always starts with the first player
};

