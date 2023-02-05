#include<iostream>
using namespace std;

string binary(int n){
    if (n==0) return "0" ;
    if (n==1) return "1" ;
    char ch=n%2==0?'0':'1';
    return binary(n/2)+ch;
}

int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num; 
    cout<<binary(num);;;;
    return 0;
}
