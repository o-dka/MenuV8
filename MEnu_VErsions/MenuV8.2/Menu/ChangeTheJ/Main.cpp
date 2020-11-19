#include "ChangeTheJ.h"
#include "Fibonum.h"
#include <iostream>
using namespace std;
int main() {
  
  int input;
  cin>>input;
  if (input == 1) {
    int x, y, z, d;
    ChangeTheJ(x, y, z, d);
  } 
  else if (input == 2) {
    int x, y, z, d, a;
    Fibonum(d);
  }
  return 0;
}
