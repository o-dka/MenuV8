#include <fstream>
#include <iostream>
#include <sstream>
//
using namespace std;
void Writer(string input, string filename, string change) {
  string choose, check;
  fstream file(filename.c_str());
  getline(file, input);
  getline(file, check);
   file.close();
  if (check == "1")   // checks if the file has been changed before
    cout << "Settings changed already, starting.."<< "\n";
  else {
  INPUT:
    cout << input << endl;
    cout << "what to change?" << endl;
    cin >> choose;
    cout << "what to change to ?" << endl;
    cin >> change;
    if (input.find(choose) < input.length()) 
      switch (change.length()) {
          case 1:
            input.replace(input.find(choose), 1, change);
          case 2:
            input.replace(input.find(choose), 2, change);
      }
    if ((input.find(choose) < input.length()) && (change.length() >2)) {  // possibly will add a few more failsafes, for now there is one
      cout << "You can't do that!" << endl << endl;
      goto INPUT;
    }
    file.open("../Configs/ConfigChanger.txt",ofstream::out |ofstream::trunc);  // deletes contents of a file, writes new ones
    file << input << "\n1";
    cout << "Changed to :" << endl << input;
  }
}