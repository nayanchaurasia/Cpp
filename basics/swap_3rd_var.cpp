#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"enter the first number(a) ";
    cin>>a;
    cout<<"enter the second number(b) ";
    cin>>b;
    int temp;
    temp=b;
    b=a;
    a=temp;
    cout<<"a = "<<a<<" b = "<<b;
}