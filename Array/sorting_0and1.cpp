#include<iostream>
using namespace std;

void inputArray(int arr[],int size){
    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

void sorting0and1(int arr[],int size){
    // finding the number of 0's in the given array
    int count_0=0;
    for (int i = 0; i < size; i++)
    {   if (arr[i]==0)
            count_0++;
    }
    
    // firts starting memory location will be zero for the number of zeros
    for (int i = 0; i < size; i++)
    {
        if (i<count_0)
            arr[i]=0;
        else
            arr[i]=1;
    }
     
}

int main(){
    int array[1000],n;
    cout<<"enter the size of the array\n";
    cin>>n;
    inputArray(array,n);
    cout<<"enterted array is : ";
    printArray(array,n);
    cout<<endl;   
    sorting0and1(array,n);
    cout<<"the given sorted array is : ";
    printArray(array,n);
}