#include <fstream>
#include <iostream>

using namespace std;
int main() {
  bool two_players = 0, two_sets_of_rocks = 0;
  int rocks_to_win1 = 40, rocks_to_win_sum = 0, rocks_add = 12,rocks_multiply = 2, rocks_amount_start = 30, input_line_№;
  char input;
  string read;
  ifstream file("ConfigChanger.txt");
  ifstream file2("ConfigInfo")
  cout << "view the file?(Y/N)" << endl;
  cin >> input;

  if (input == 'Y') {
    if (file.is_open() == true) {
      for (int i = 1; i <= 7; i++) {
        std::getline(file, read);
        file >> read;
        cout << read << endl;
      }
      file.close();
    }
  } else {
    cout << "Ok,bye!" << endl;
  }
  cout << "edit file? (Y/N)" << endl;
  cin >> input;

  if (input == 'Y') {
    cout << "edit file from CLI?(Y/N)" << endl;
    cin >> input;
    if (input == 'Y') {
      if (file.is_open() == true) {
      for (int i = 1; i <= 7; i++) {
        std::getline(file2, read);
        file >> read;
        cout << i '.' << read << endl;
      }
      cout << "what line you want to change?" << endl;
      cin >> input_line_№;
        if (file.is_open() == true) {
          
            line.replace(line.find(input_line_№),deleteline.length(),"");
          }
        
      }
      else {
        cout << "Relative path to file - ../MenuV8/Menu/ConfigChanger/src/ConfigChanger.txt"
             << endl;
      }
     else {
      cout << "Ok,bye!" << endl;
    }
  }
