#include<iostream>
using namespace std;
// WITHOUT IF ELSE
int main(){
    int a,b,x; 
    cout<<"enter the first number ";
    cin>>a;
    cout<<"enter the second number ";
    cin>>b;
    x=(a>b)?a:b;
    cout<<"biggest number is "<<x;
}