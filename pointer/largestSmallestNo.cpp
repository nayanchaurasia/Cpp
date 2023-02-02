#include<iostream>
using namespace std;

void largest_smallest(int num1,int num2,int num3,int* large,int* small){
    if (num1>num2)
    {
        if (num2>num3)
            *small=num3;
        if(num3>num2)
            *small=num2;
    }
    else{
        if(num3>num1)
            *small=num1;       
        if(num3<num1)
            *small=num3;       
    }
    
    if (*large<num1)
        *large=num1;
    if (*large<num2)
        *large=num2;
    if (*large<num3)
        *large=num3;  
}

int main(){
    int x,y,z;
    int largest=-1,smallest=-1;
    cout<<"enter the first number";
    cin>>x;
    cout<<"enter the second number";
    cin>>y;
    cout<<"enter the second number";
    cin>>z;
    largest_smallest(x,y,z,&largest,&smallest);
    cout<<"the largest and smallest number is : "<<largest<<" "<<smallest;
    return 0;
}