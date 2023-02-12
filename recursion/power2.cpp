/*
find p^q by recursion
more efficent
*/
#include<iostream>
using namespace std;

int fun(int p,int k){
    //base case
    if (k==0) return 1;
    if(k%2==0){
        int result=fun(p,k/2);
        return result * result;
    }else
    {
        int result=fun(p,(k-1)/2);
        return p*result*result;
    }
    
}

int main(){
    int num,q;
    cout<<"P: ";
    cin>> num;
    cout<<"Q : ";
    cin>>q;
    // we are sending num-1 because for n==1 it will be 0 and 
    //for n==2 it will be 1
    cout<<" p ^ q ="<<fun(num,q);
    return 0;
}