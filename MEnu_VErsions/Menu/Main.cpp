#include "ChangeTheJ.h"
#include "Fibonum.h"
//
#include <iostream>
using namespace std;
int main() {
  int input;
  cout << "Choose the Fucntion!" << endl;
  cin >> input;
  if (input <= 3) {
    switch (input) {
    case 1: {
      cout << "----------------------ChangeTheJ----------------------" << endl;
      int x1, y1, z1, d1;
      ChangeTheJ(x1, y1, z1, d1);
    } 
    break;
    case 2: {
      cout << "----------------------Fibonum----------------------" << endl;
      int x2 = 1, a2 = 1;
      long long y2 = 1, z2 = 1, d2 = 1;
      Fibonum(x2, y2, z2, d2, a2);
    }
    break;
    case 3:
      cout << "Not available yet,sorry!"<< endl;
      break;
    }
  } else {
    cout << "Something went wrong!" << endl;
    return 0;
  }
}