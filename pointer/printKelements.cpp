/*
Q1 -Write a program to print the kth element of an array using pointers.

The first line of the input contains the size of the array and the value of k.

The second line of input contains the elements of the array. 
You can assume that 0 <= k < size 
of the array
Sample Input 
4 3
10 3 20 52
Sample output 20
*/
#include<iostream>
using namespace std;

void kthElement(int* a,int size,int k,int* num){

    for (int i = 0; i < size; i++)
    {
        if(i==k-1)
            *num=*(a+i);
    }
}

int main(){
    int n,x[100],k,element;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the k";
    cin>>k;
    cout<<"enter the array: ";
    for (int i = 0; i < n; i++)
        cin>>x[i];
    kthElement(x,n,k,&element);
    cout<<"the kth element is "<<element;
    return 0;
}