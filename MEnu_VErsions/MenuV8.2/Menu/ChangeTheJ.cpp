#include <iostream>
using namespace std;
//
#include "ChangeTheJ.h"
void ChangeTheJ(int divn, int subn, int desn, int curn) {
  cout << "please enter your current number" << endl;
  cin >> curn;
  cout << "please enter your desired number" << endl;
  cin >> desn;
  cout << "please enter the number you want to divide you current number to"
       << endl;
  cin >> divn;
  cout << "please enter the number you want to subtract your current number "
          "from "
       << endl;
  cin >> subn;
  while (curn != desn) {
    if (curn % divn == 0 && curn / divn >= desn) {
      curn /= divn;
      cout << "/" << divn << endl;
    }

    else {
      curn = curn - subn;
      cout << "-" << subn << endl;
    }
  }
}
