#include <fstream>
#include <iostream>
#include "ConfigViewer.h"
using namespace std;

int ConfigViewer(char input,string readChanger, string readChangerInfo) {
  ifstream fileChanger("ConfigChanger.txt", ios::app);
  ifstream fileInfo("ConfigInfo", ios::app);
  while (!fileInfo.eof()&& !fileChanger.eof()) {
    fileChanger>>readChanger;
    fileInfo >> readChangerInfo;
    if (readChangerInfo == ".")
      cout << readChangerInfo  << readChanger <<'\n'<< endl;
    else
      cout << readChangerInfo << " ";
  }
  fileChanger.close();
  fileInfo.close();
    cout << "Relative path ConfigChanger - ../MenuV8/Menu/ConfigChanger/src/ConfigChanger.txt"<< endl; 
}
