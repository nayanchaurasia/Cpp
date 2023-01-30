#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"x : ";
    cin>>x;
    int *ptrx=&x;
    cout<<"the address is";
    cout<<ptrx;

}