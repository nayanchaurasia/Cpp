/*
find p^q by recursion
*/
#include<iostream>
using namespace std;

int sumDigits(int n,int k){
    //base case
    if (k==0) return 1;
    int sum=n*sumDigits(n,--k);
    return sum;
}

int main(){
    int num,q;
    cout<<"P: ";
    cin>> num;
    cout<<"Q : ";
    cin>>q;
    // we are sending num-1 because for n==1 it will be 0 and 
    //for n==2 it will be 1
    cout<<endl<<" p ^ q ="<<sumDigits(num,q);
    return 0;
}