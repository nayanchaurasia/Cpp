/*
Q1 - Given a number n, print the following pattern without using any loop
n, n-5, n-10, …, 0, 5, 10, …, n-5, n
There should be 0 or at most one occurrence of negative number in the series
Sample Input: n = 16
Sample Output: 16, 11, 6, 1, -4, 1, 6, 11, 16
*/
#include<iostream>
using namespace std;

void printNum(int n){

    if(n<=0){
        cout<<n<<" ";
        return;
    }
    cout<<n<<" ";
    printNum(n-5);
    cout<<n<<" ";
}

int main(){
    int num;
    cout<<"enter the number"<<endl;
    cin>>num;
    printNum(num);
    return 0;
}