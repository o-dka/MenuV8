#include <iostream>
#include <fstream>
#include <string>
/* 
Это можно выводить сколько угодно раз но нужна и другая функция.
Она показывает нам начальную настройку при в входе в  Игру Камней, ровно один раз, дальше она берет и запоминает записали ли мы или нет в другом файле.
Если в  файле сказано что записано, то настройка не проводится.
*/
using namespace std;
void Writer(string input,string filename,string change,bool status){
	ifstream file(filename.c_str());
	getline(file,input);
	for (int i =0; i < input.length();i++) {
		
	}
}