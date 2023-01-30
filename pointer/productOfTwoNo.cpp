#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *ptrx=&x,*ptry=&y;
    cout<<"enter the first number";
    cin>>*ptrx;
    cout<<"enter the second number";
    cin>>*ptry;
    int pro=*ptrx * *ptry;
    cout<<"the product of "<<*ptrx<<" and "<<*ptry<<" is "<<pro;
    return 0;
}