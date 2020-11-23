#include "ChangeTheJ.h"
#include "Fibonum.h"
//
#include <iostream>
using namespace std;
int main() {
  int input;
  cin >> input;
  if (input == 1) {
    int x1, y1, z1, d1;
    ChangeTheJ(x1, y1, z1, d1);
  } else if (input == 2) {
    int x2 = 1, a2 = 1;
    long long y2 = 1, z2 = 1, d2 = 1;
    Fibonum(x2, y2, z2, d2, a2);

  } else
    cout << "Something went wrong!" << endl;
  return 0;
}
