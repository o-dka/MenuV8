#include <fstream>
#include <iostream>
#include <sstream>
using namespace std;
int main()
{
	string line;
	string filen = "../Configs/ConfigChanger.txt";
	std::fstream file(filen.c_str());
	std::ios::ifstream file(filen.c_str());
	getline(file, line);
	cout << line << endl;
	std::cout << file.good() << std::endl;
	return 0;
}
