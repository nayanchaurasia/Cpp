//find the sum of digits of 3 digit number
#include<iostream>
// IMP ===LOGIC  TO TAKE OUT THE MIDDLE
// DIGIT SEPARATE
using namespace std;
int main(){
    int num;
    int l1,l2,l3;
    cout<<"enter the 3 digit number ";
    cin>>num;
    l1=num/100;
    l3=num%10;
    l2=(num/10)%10;
    //use of \nm in place of endl
    cout<<"sum is \n"<<(l1+l2+l3);
    return 0;
}