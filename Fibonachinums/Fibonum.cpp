#include <iostream>
using namespace std;

int main(){
int count;
int presentF=1;
int pastF1=1, pastF2=1;
int i=3; 
cout<<"How much of the fibonachi number you want to see?"<<endl;
cin>>count;
cout<<pastF1<<endl;
while(i<=count){
    presentF=pastF1+pastF2;
    pastF1 =pastF2;
    pastF2 =presentF;
    cout<<presentF<<endl;
    i++;
}
cout<<"Here is"<<count<<"of the fibonachi numbers"<<endl;
return 0;  
}