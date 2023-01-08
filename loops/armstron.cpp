#include<iostream>
using namespace std;
int main(){
    int num,n,r,sum=0;
    cout<<"enter the number " ;
    cin>>num;
    n=num;
    while (num>0)
    {
        r=num%10;
        sum+=r*r*r;
        num/=10;
    }
    if (n==sum)
        cout<<"given number is armstrong ";
    else
        cout<<" not armstrong";
    return 0;
}