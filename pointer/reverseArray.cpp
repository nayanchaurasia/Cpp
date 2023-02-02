/*
Q2 -Write a program to traverse the array in the reverse order using pointers.

The first line of the input contains the size of the array.

The second line of input contains the elements of the array.

Sample Input:

1 2 3 4 5 
Sample output:5 4 3 2 1 
*/
#include<iostream>
using namespace std;

int main(){
    int n,array[100];
    int* a=array;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the array: ";
    for (int i = 0; i < n; i++)
        cin>>*(a+i);

    for (int i = 0; i <=n/2; i++)
    {
        int temp=*(a+i);
        *(a+i)=*(a+n-i-1);
        *(a+n-i-1)=temp;
    }
    
    for (int i = 0; i < n; i++){
        cout<<*(a+i)<<" ";
    cout<<endl;
    }
    return 0;
}