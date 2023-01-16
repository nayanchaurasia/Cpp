/*
input=={1,2,3,4,5,6}
output=={2,1,4,3,6,5}
VALID OF EVEN SIZE ONLY} */
#include<iostream>
using namespace std;
// concept of global variable 
// global variable calling ==::n
int n;
void arrayInput(int arr1[]){
    cout<<"enter the array \n";
    for (int i = 0; i < ::n; i++)
        cin>>arr1[i];
}
// int arr1[]==*arr1 in parameter sine acts as a pointer
void printArray(int *arr1){
    cout<<" the array is \n";
    for (int i = 0; i < ::n; i++)
        cout<<arr1[i]<<" ";
}
void swapAlter(int array[])
{
    for (int i = 0; i<::n ; i++)
    {
        if (i%2!=0)
            continue;
        int temp=array[i];
        array[i]=array[i+1];
        array[i+1]=temp;
    }
}
int main(){
    cout<<"enter the size of array ";
    cin>>::n;
    int arr[1000];
    arrayInput(arr);
    swapAlter(arr);
    printArray(arr);
    return 0;
}