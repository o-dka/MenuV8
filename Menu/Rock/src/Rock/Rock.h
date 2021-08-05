#pragma once
#include <iostream>
class Rock {
    private:
	int c = 0;
	int add;
	int mult;
	bool two;
	std::string filenameInfo = "Configs/ConfigInfo";
	std::string filename = "Configs/ConfigChanger.txt";
	std::string readChanger, readInfo, line;

    public:
	int won;
	int first;
	int second;
	int CurrSh = 1;
	Rock();
	void Reader();
	void Writer(std::string input, std::string change);
	void DoIt(int entry, int choose);
};

