#include<iostream>
using namespace std;
int main(){
    int n,t,a=0,b=1;
    cout<<"enter the number of digits in series ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        cout<<a<<" ";
        t=a;
        a+=b;
        b=t;
    }
    
    
}