#include<iostream>
using namespace std;

bool isPrime(int n,int k=2){
    if (k==n) return true;
    bool state;
    if(n%k==0){
        state=false;
        return false;}
    state=true;
    return (state && isPrime(n,k+1));
}

int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num; 
    if(num==1)
    cout<<"0";
    cout<<isPrime(num);;;;
    return 0;
}
