#include<iostream>
using namespace std;
int main(){
    int num,n,r,sum=0;
    cout<<"enter the number " ;
    cin>>num;
    while (num>0)
    {
        n=num%10;
        sum=sum*10+n;
        num/=10;
    }
    
    cout<<sum;
    return 0;
}