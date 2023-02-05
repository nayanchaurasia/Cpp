/*
euclids algorithm states that 
if x>y then the hcf is equal to the y, x-y OR y, x%y
gcf(x,y)==gcf(x,y-x)
gcf(x,y)==gcf(x,y%x)
*/
#include<iostream>
using namespace std;

int hcf(int x,int y){
    if(y==0) return x ;
    hcf(y,x%y);
}
int main(){
    int num1,num2;
    int factor=1;
    cout<<"enter the first number: ";
    cin>>num1;
    cout<<"enter the second number: ";
    cin>>num2; 
    if(num1<num2){
        int temp=num1;
        num1=num2;
        num2=temp;
    }
    cout<<"the greatest common factor(HCF) is : "<<hcf(num1,num2);
}
