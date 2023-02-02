/*
Q2 - Write a program to find the sum of all the elements of an array. Use pointers to traverse 
the array. The first line of the input contains the size of the array.

The second line of input contains the elements of the array

Sample Input:
4
1 3 4 2
Sample output:10
*/
#include<iostream>
using namespace std;

void sumElement(int* a,int size,int* num){

    for (int i = 0; i < size; i++)
        *num+=*(a+i);
}

int main(){
    int n,array[100],sum=0;
    cout<<"enter the size of array : ";
    cin>>n;
    cout<<"enter the array: ";
    for (int i = 0; i < n; i++)
        cin>>array[i];
    sumElement(array,n,&sum);
    cout<<"the sum of the array is "<<sum;
    return 0;
}