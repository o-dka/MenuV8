#include <iostream>
using namespace std;
#include "ChangeTheJ.h"
#include "Fibonum.h"

void UI2Eng(int changer2){
int divn,subn,curn,desn,count;
cout<<"++++++++++++++++++"<<endl;
cout<<" 1-Fibonachi" <<endl;
cout<<" 2- basically a number finder from EGE"<<endl;
cout<<"++++++++++++++++++"<<endl;   
cout<< "choose wich parts of the menu you should proceed to by typing in buttons 1 or 2 " <<endl;

  if(changer2 == 1){
        Fibonachinums(count);
    }
    
   if (changer2== 2){
        ChangetheJ(divn,subn,curn,desn);
     }

}
void UImEng(int changer){
    while (changer!=4){
int divn,subn,curn,desn,count,changer2;
cout<<"++++++++++++++++++"<<endl;
cout<<" 1-  Fun and Games  " <<endl;
cout<<" 2-  Calculator (Not finished Yet) "<<endl;
cout<<" 3-  Calculus stuff (not a calculator)" <<endl;
cout<<"++++++++++++++++++"<<endl;  
cout<< "choose wich parts of the menu you should proceed to by typing in buttons 1 - 3 or type in 4 to exit the program" <<endl;
cin>>changer;
if (changer == 1)
{
    cout<< "Not finished Yet!" <<endl;
}

if(changer == 2){
    cout<< "Not finished Yet!" <<endl;
}

if (changer == 3){
    UI2Eng(changer2);
}  
}
}

int main(void){
int changer,changer2,changer3;//for menu operations(U.I)
int divn,subn,curn,desn,count; //for calculation purposes(i.e finding numbers and stuff)
UImEng(changer);

}
 