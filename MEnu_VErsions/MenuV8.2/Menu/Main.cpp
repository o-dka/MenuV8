#include "ChangeTheJ.h"
#include <iostream>
using namespace std;
int main(){
int curr,des,div,sub ;
int result;
int changer;
cout<<" 1-  Fibonnaci numbers" <<endl;
cout<<" 2-  ChangeTheJ"<<endl;
cout<<" 3-  RockGame" <<endl;
cin>> changer;
while(changer!= 4){
if(changer == 2)
    ChangeTheJ(curr,des,div,sub);

else
    cout<<"Not Finished Yet!";
}
return 0; 
}
