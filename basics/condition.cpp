// check that a= first number a>50 and a>b then output will bw 1 else 0
//WITOUT IF ELSE
#include<iostream>
using namespace std;
int main(){
    int a,x,b;
    cout<<"enter the first number(a) ";
    cin>>a;
    cout<<"enter the second number ";
    cin>>b;
    x=((a>b)&&(a>50))?1:0;
    cout<<x;

}