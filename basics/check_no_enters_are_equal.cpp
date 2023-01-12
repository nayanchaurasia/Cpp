#include<iostream>
using namespace std;
// output will be 0(For unequal)or 1(for equality) 
//WITHOUT IF ELSE
int main(){
    int num1,num2,x;
    cout<<"enter the first number ";
    cin>>num1;
    cout<<"enter the second number ";
    cin>>num2;
    x=(num1==num2)?1:0;
    cout<<x;
    // we cant use this cout<<num1==num2;
}