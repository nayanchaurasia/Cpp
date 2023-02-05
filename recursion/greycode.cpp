#include<iostream>
using namespace std;

string binary(int n){
    if (n==0 || n==1) return (n==0?"0":"1");
    int last=n%10;
    int num=n/10;
    int secondLast=num%10;
    char ch=((secondLast^ last)==1 )?'1':'0';
    return binary(n/10)+ch;
}

int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num; 
    cout<<binary(num);;;;
    return 0;
}
