#include<iostream>
using namespace std;
void prime_no(int n1,int n2){
    for (int i = n1; i <=n2; i++)
    {
        int c=0;
       for (int j = 2; j < i; j++)
       {
            if (i%j==0)
                c+=1;
        
       }
       if (c==0){
         cout<<i<<" ";
       }
        
    }
    
}
int main(){
    int num1,num2;
    cout<<"enter the numbers b/w u want prime number\n";
    cin>>num1;
    cin>>num2;
    prime_no(num1,num2);
}