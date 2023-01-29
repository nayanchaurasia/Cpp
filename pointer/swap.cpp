#include<iostream>
using namespace std;
int main(){
    int x,y;
    int *ptrx=&x,*ptry=&y;
    cout<<"enter x ";
    cin>>*ptrx;
    cout<<"enter y ";
    cin>>*ptry;
    int temp=*ptrx;
    *ptrx=*ptry;
    *ptry=temp;
    cout<<"the value of x and y are "<<*ptrx<<" and "<<*ptry;
    return 0;
}