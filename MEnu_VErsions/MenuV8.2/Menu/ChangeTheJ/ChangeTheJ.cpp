//( int divn, int subn,int desn,int curn)
#include <iostream>
using namespace std;

void ChangeTheJ( int divn, int subn,int desn,int curn){
    while(curn!=desn){
            if (curn%divn == 0 && curn/divn >= desn){
                    curn /= divn;
                    cout<<"/"<<divn<<endl;
                }

            else {
                    curn= curn-subn;
                    cout<<"-"<<subn<<endl;
                }
        }
    }
int main(){
    int x=1,y=1,z=1,d=1;
    cout<<"please enter your current number"<<endl;
    cin>>d;
    cout<<"please enter your desired number"<<endl;
    cin>>z;
    cout<<"please enter the number you want to divide you current number to"<<endl;
    cin>>x;
    cout<<"please enter the number you want to subtract your current number from "<<endl;
    cin>>y;
    ChangeTheJ(x,y,z,d);

return 0;
}