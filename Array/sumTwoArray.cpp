/*
 Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such 
that they belong to different arrays and are not at the same index
*/
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
void printArray(int arr1[]){
    cout<<" the unique array is \n";
    for (int i = 0; i<::n; i++){
        cout<<arr1[i]<<" ";
    }
}
/*
unique===unique array which is defined in the main function and send to this function to store
the values after operations on it 
*/
void uniqueELe(int array[])
{   
    for (int i = 0; i<::n; i++)
    {   
        int l=array[i],count=0;
        for (int j = 0; j < ::n; j++)
        {
            if (l==array[j])
                count++;
        }
        if (count==1)
            cout<<l<<" ";
    }
    
}
int main(){
    cout<<"enter the size of array ";
    cin>>::n;
    int arr1[100];
    int arr2[100];
    arrayInput(arr1);
    cout<<"the unique elements are : \n";
    uniqueELe(arr1);
    return 0;
}