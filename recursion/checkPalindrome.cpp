/*
check whether the given number is palindrome or not (not converting it to the
string and not by iteration )
*/

#include<iostream>
using namespace std;

bool palindrome(int n,int *temp){
    if(n<10){
        int last=(*temp)%10;
        (*temp)/10;
        return n==last;
    }
    bool result= (palindrome(n/10,temp) and (n%10==(*temp)%10));
    cout<<result<<" ";
    cout<<(*temp)/10<<" ";
    return result ;
}
int main(){
    int num;
    cout<<"enter the number: ";
    cin>>num;
    int t=num;
    cout<<palindrome(num,&t);
    //if(palindrome(num,&t))
    //cout<<"the number is palindrome ";
    //else
    //cout<<"the number is not palindrome ";
}