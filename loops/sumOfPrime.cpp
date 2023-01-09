/*
entered number 14
expected output= sum of two prime number
14=11+3
14=7+7
*/
#include<iostream>
using namespace std;
int prime(int n)
{ 
    int c=0;
    for (int i = 2; i <n-1; i++)
    {   
        if (n%i==0)
            c++;
    }
    if (c==0)
        return n;
    else 
        return 0;
}
int main(){
    int num,n1=2,n2,k;
    // n1=2 beacuase 1 and 0 are not considered as prime number
    cout<<"enter the number ";
    cin>>num;
    n2=num-n1;
    // this i felse is because the n1 == n2 when going from above to bottom
    if (num%2==0)
        k=num/2;
    else 
        k=(num+1)/2;
    
    for (int i = 1; i <=k; i++)
    {
        int sum;
        sum=prime(n1)+prime(n2);
        if (sum==num)
            cout<<num<<"="<<n1<<"+"<<n2<<endl;
        n1++;
        n2--;
    }
    


}