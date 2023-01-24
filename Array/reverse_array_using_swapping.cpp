#include<iostream>
using namespace std;

void inputArray(int arr[],int size){
    cout<< "enter the elements \n";
    for (int i = 0; i < size; i++)
        cin>> arr[i];
} 

void printArray(int arr[],int size){
    cout<< " the array is \n";
    for (int i = 0; i < size; i++)
        cout<< arr[i]<<" ";
} 

void reverseArray_Swapping(int arr[],int size){
    int temp;
    for (int i=0,j=size-1; i < size/2,j>=size/2; i++,j--)
    {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    
}

int main(){
    int array[1000],n;
    cout<<"enter the size of the array \n";
    cin>> n;
    inputArray(array,n);
    reverseArray_Swapping(array,n);
    printArray(array,n);
}