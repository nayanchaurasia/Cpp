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
void swapArray(int array[])
{
    for (int i = 0,j = ::n-1; 1 ; i++,j--)
    {
        if (i>=j)
            break;
        
        int temp=array[i];
        array[i]=array[j];
        array[j]=temp;

    }
}
int main(){
    cout<<"enter the size of array ";
    cin>>::n;
    int arr[1000];
    arrayInput(arr);
    swapArray(arr);
    printArray(arr);
    return 0;
}