/*
    INPUT==ascending order of array with integers values 
    OUTPUT==  ascending order of array with square of integers values
    problem==if any elements is negative then their ia problrm in the order 
    otherwise the square order is same as that of the given ascending order of array
*/

#include<iostream>
using namespace std;
int anyNegNo=0;

void inputArray(int arr[],int size){
    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

void Array_squared(int arr[],int size){
    for (int i = 0; i < size; i++)
        arr[i]*=arr[i];
}

void checkArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        if (arr[i]<0)
            anyNegNo++;
}

void absoluteValues(int arr[],int size){
    for (int i = 0; i < size; i++)
        arr[i]=abs(arr[i]);
}

void bubbleSort(int arr[],int size){
    for (int i = 0; i < size-1; i++)
    {
        for (int j = 0; j < size-1-i; j++)
        {
            if (arr[j+1]<arr[j])
            {
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            } 
        } 
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
    checkArray(array,n);
    if (anyNegNo==0){
        Array_squared(array,n);
        cout<<"the given sorted array is : ";
        printArray(array,n);
        cout<<endl;
    }
    else{
        absoluteValues(array,n);
        bubbleSort(array,n);
        Array_squared(array,n);
        cout<<"the given sorted array is : ";
        printArray(array,n);
        cout<<endl;
    }
    return 0;
}