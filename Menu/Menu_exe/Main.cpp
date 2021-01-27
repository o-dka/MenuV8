#include <ChangeTheJ/ChangeTheJ.h>
#include <Fibonum/Fibonum.h>
//
#include <iostream>
using namespace std;
int main() {
  int input;
  cout << "Choose the Function!" << endl;
  cout << "----1-ChangeTheJ----" << endl;
  cout << "----2-Fibonum-------" << endl;
  cout << "----3-Game-Menu----" << endl;
  cout << "----4-Exit----" << endl;
  cin >> input;
  if (input <= 3) {
    switch (input) {
    case 1: {
      cout << "----------------------ChangeTheJ----------------------" << endl;
      int x1, y1, z1, d1; // variables for testing only, will name them properly once released
      ChangeTheJ(x1, y1, z1, d1);
    } break;
    case 2: {
      cout << "----------------------Fibonum----------------------" << endl;
      int x2 = 1, a2 = 1;
      long long y2 = 1, z2 = 1, d2 = 1; // variables for testing only, will name them properly once released
      Fibonum(x2, y2, z2, d2, a2);
    } break;
    case 3: {
      cout << "--------------------Game-Menu--------------------" << endl;
      /*Game-Menu
        -TickTakToe
        -RockGame
        -ConfigViewer
      */ 
     
    } break;
    }
  } else if (input == 4) {
    cout << "Goodbye!" << endl;
    return 0;
  } else {
    cout << " Secret Menu " << endl;
    cout << "Version:" << endl;
    cout << "There is only 2 functions available and one is in development " << endl;
  }
  return 0;
}