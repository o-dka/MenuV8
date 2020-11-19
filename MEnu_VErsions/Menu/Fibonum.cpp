#include <iostream>
using namespace std;
//
#include "Fibonum.h"
void Fibonum(int count, int presentF, int pastF1, int pastF2, int i) {
  cout << "How much of the fibonachi number you want to see?" << endl;
  presentF = 1;
  pastF1 = 1, pastF2 = 1;
  i = 3;
  cin >> count;
  cout << pastF1 << endl;
  while (i <= count) {
    presentF = pastF1 + pastF2;
    pastF1 = pastF2;
    pastF2 = presentF;
    cout << presentF << endl;
    i++;
  }
  cout << "Here is " << count << " of the fibonachi numbers" << endl;
}
