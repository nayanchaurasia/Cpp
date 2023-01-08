#include<iostream>
using namespace std;
int main(){
    int n,num,rev=0;
    cin>>num;
    // reversing 
    while (num>0)
    {
        n=num%10;
        rev=rev*10+n;
        num/=10;
    }
    cout<<rev;
    
 }