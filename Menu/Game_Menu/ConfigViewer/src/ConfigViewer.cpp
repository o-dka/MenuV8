#include "ConfigViewer.h"
#include <fstream>
#include <iostream>
using namespace std;

void ConfigViewer( string readChanger, string readInfo,string filename) {
  string filenameInfo ="../Configs/ConfigInfo";
  ifstream fileChanger(filename.c_str());
  ifstream fileInfo(filenameInfo.c_str());
  getline(fileChanger, readChanger);
  int c = 0;
  for (int i = 0; i < 12; i++) {
    if (c == 5)
      break;
    getline(fileInfo, readInfo);
    if (readChanger[i+1] == ' ')
      cout << readInfo << readChanger[i] << '\n' << endl;
    else {
      cout << readInfo << readChanger[i + 1] << readChanger[i + 2 ] << '\n'<< endl;
      i+=2;
    }
    c++;
  }
}