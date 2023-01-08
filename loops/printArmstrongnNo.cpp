#include<iostream>
using namespace std;
int main(){
    int num,n,r,sum;
    cout<<"enter the number before which we have to print all the armstrong number " ;
    cin>>num;
    cout<<"0\n";
    for (int i = 1; i <num; i++)
    {   
        n=i;
        sum=0;
        while (n>0)
        {
            r=n%10;
            sum+=r*r*r;
            n/=10;
        }
    if (i==sum)
        cout<<i<<endl;
    }
    return 0;
}