//find the sum of the first an last
// digit of the 5 word word
#include<iostream>
using namespace std;
int main(){
    int num_5,l1,sum,ln;
    cout<<"enter the five digit number ";
    cin>>num_5;
    // very carefully make the logic ...
    //in this questionn u will have to use both / an %
    l1=num_5/10000;
    ln=num_5%10;
    sum=l1+ln;
    cout<<"the sum of first and last digit "
    <<"of given number is \n"<<sum;
    return 0;

}