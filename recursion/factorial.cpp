#include<iostream>
using namespace std;

int fac(int n){
    if (n==1)
        return 1;
    int ans=n*fac(n-1);
    return ans;
}

int main(){
    int num;
    cout<<"number : ";
    cin>> num;
    cout<<"the factorial is "<<fac(num);
    return 0;
}