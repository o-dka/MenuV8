#include <iostream>
using namespace std;

void ChangetheJ(int curn,int desn,int divn,int subn){
cout<<"please enter your current number"<<endl;
cin>>curn;
cout<<"please enter your desired number"<<endl;
cin>>desn;
cout<<"please enter the number you want to divide you current number to"<<endl;
cin>>divn;
cout<<"please enter the number you want to subtract your current number from "<<endl;
cin>>subn;
while(curn!=desn){
    if (curn%divn == 0 && curn/divn >= desn){
        curn /= divn;
        cout<< ":"<< divn<<endl;
    }
    else
    {
        curn= curn-subn;
        cout<< "-"<< subn<<endl;
    }
}
}
void Fibonachinums(int count){
int presentF=1;
int pastF1=1, pastF2=1;
int i=3; 
cout<<"How much  fibonachi numbers you want to see?"<<endl;
cin>>count;
cout<<pastF1<<endl;
while(i<=count){
    presentF=pastF1+pastF2;
    pastF1 =pastF2;
    pastF2 =presentF;
    cout<<presentF<<endl;
    i++;
}
cout<<"==========="<<endl;
cout<<"Here is"<<count<<"of the fibonachi numbers"<<endl;
}
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
/*
paste for ui
cout<<"++++++++++++++++++"<<endl;
cout<<" 1-               " <<endl;
cout<<" 2-               "<<endl;
cout<<" 3-               " <<endl;
cout<<"++++++++++++++++++"<<endl;    
*/
int main(void){
int changer,changer2,changer3;//for menu operations(U.I)
int divn,subn,curn,desn,count; //for calculation purposes(i.e finding numbers and stuff)
//ChangetheJ(divn,subn,curn,desn);
//Fibonachinums(count);
UImEng(changer);

}
 