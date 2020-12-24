#include <iostream>
using namespace std;
/*
paste for ui
cout<<"++++++++++++++++++"<<endl;
cout<<" 1-               " <<endl;
cout<<" 2-               "<<endl;
cout<<" 3-               " <<endl;
cout<<"++++++++++++++++++"<<endl;
*/
int main() {
  int x;
  int changer;

  cout << "++++++++++++++++++" << endl;
  cout << " 1-  Not finished Yet        " << endl;
  cout << " 2-  Not finished Yet             " << endl;
  cout << " 3-  Calculations                " << endl;
  cout << "++++++++++++++++++" << endl;
  cout << "choose wich parts of the menu you should proceed to by typing in "
          "buttons 1 - 3 "
       << endl;
  cin >> changer;
  switch (changer) {
  case 1:

    x = 1 + changer;
    cout << x;
    return 0;

  case 2:
    cout << "2";
    return 0;

  case 3:
    cout << "3";
    return 0;
  }
  return 0;
}
// void Ui() {}
