#pragma once
#include <iostream>
class Rock {
    protected:
	int c = 0;
	int add;
	int mult;
	bool two;
	std::string line;
	std::string filenameInfo = "../Configs/ConfigInfo";
	std::string filename = "../Configs/ConfigChanger.txt";
	std::string readChanger, readInfo;

    public:
	Rock();
	void Reader();
	int first;
	int won;
	int second;
	int CurrSh = 1;
	void Writer(std::string input, std::string change);
	void DoIt(int entry, int choose);
};

