#include<iostream>
using namespace std;

void hcf(int x,int y,int *ptr,int k=1){
    if(k>x || k>y) return ;
    if ((x%k==0) && (y%k==0)) *ptr=k;
    hcf(x,y,ptr,k+1);
}
int main(){
    int num1,num2;
    int factor=1;
    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2; 
    hcf(num1,num2,&factor);
    cout<<"the greatest common factor(HCF) is : "<<factor;
}
