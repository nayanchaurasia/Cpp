#include<iostream>
using namespace std;
int rotArray[100],l=0;

void inputArray(int arr[],int size){
    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

void rotating_Array(int arr[],int size,int value){
    
    if (value>=size)
        value%=size;
    //For k elements:
    for (int i = size-value; i < size; i++)
        rotArray[l++]=arr[i];

    // for n-k elements:
    for (int i = 0; i < size-value; i++)
        rotArray[l++]=arr[i];
}

int main(){
    int array[100],n,k;
    cout<<"enter the size of the array\n";
    cin>>n;
    inputArray(array,n);
    cout<<"enter the value how much time you want to rotate the array \n";
    cin>>k;
    rotating_Array(array,n,k);
    cout<<"the original array is : ";
    printArray(array,n);
    cout<<endl<<"the rotated array is :";
    printArray(rotArray,n);
    cout<<endl;
}