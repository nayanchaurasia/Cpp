#include<iostream>
using namespace std;

int fab(int n){
    // base case
    if (n==1 || n==0) return n;
    //assumptions we know fab(n-1) and fab(n-2)
    return fab(n-1)+ fab(n-2);//sub case==addition
}

int main(){
    int num;
    cout<<"enter the term  ";
    cin>> num;
    // we are sending num-1 because for n==1 it will be 0 and 
    //for n==2 it will be 1
    cout<<"the number is "<<fab(num-1);
    return 0;
}