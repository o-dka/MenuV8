#include "ChangeTheJ.h"
#include "Fibonum.h"
//
#include <iostream>
using namespace std;
int main() {
  int input;
  cin >> input;
  switch (input) {
  case 1:
    int x1, y1, z1, d1;
    ChangeTheJ(x1, y1, z1, d1);
  case 2:
    int x2, y2, z2, d2, a2;
    Fibonum(x2, y2, z2, d2, a2); 
  default:
    cout << "Something went wrong!" << endl;
  }
  return 0;
}
