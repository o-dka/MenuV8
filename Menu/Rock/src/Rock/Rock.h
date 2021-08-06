#pragma once
#include <iostream>
#include <fstream>
class Rock {
    private:
	int c = 0;
	int add;
	int mult;
	bool two;
	std::string filenameInfo = "ConfigInfo";
	std::string filename = "ConfigChanger.txt";
	std::string readChanger, readInfo, line;

    public:
	Rock();
	void Reader();
	void Writer(std::string input, std::string change);
	void DoIt(int entry, int choose);
	int won;
	int first;
	int second;
	int CurrSh = 1;
};

