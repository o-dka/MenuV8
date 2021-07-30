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
    cout << "Settings changed already, starting..\n";
  else {
  INPUT:
    cout << "\n" <<input << endl;
    cout << "what to change?\n";
    cin >> choose;
    cout << "what to change to ?\n";
    cin >> change;
    if (input.find(choose) < input.length()) 
      switch (change.length()) {
        case 1:
          input.replace(input.find(choose), 1, change);
        break;
        case 2:
          input.replace(input.find(choose), 2, change);
        break;
        default:
          cout << "------------\nYou can't do that!";
          goto INPUT;
        break;
      }
    file.open("../Configs/ConfigChanger.txt",  ofstream::out | ofstream::trunc);  // deletes contents of a file, writes new ones
    file << input << "\n1";
    cout << "Changed to :" << endl << input;
  }
}