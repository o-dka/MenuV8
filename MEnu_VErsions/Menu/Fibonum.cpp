#include <iostream>
using namespace std;
//
#include "Fibonum.h"
void Fibonum(int count, long long presentF, long long pastF1, long long pastF2,int i) {
  cout << "How much of the fibonachi number you want to see?" << endl;
  presentF = 1;
  pastF1 = 1, pastF2 = 1;
  cin >> count;
  if (count <= 93) {
    cout << pastF1 << endl;
    for (i = 3; i != count; i++) {
      presentF = pastF1 + pastF2;
      pastF1 = pastF2;
      pastF2 = presentF;
      cout << presentF << endl;
    }
    cout << "Here is " << count << " of the fibonachi numbers" << endl;
  }
  else {
    cout << "Due to the limitations of 64 bit systems  we can't show you more than 93 fibonacci numbers,sorry :/"<< endl;
  }
}
