/*
INPUT= NORMAL ARRAY
OUTPUT== tell whether their exists any two sub arrays such that the pefix and suffix
array  of the original array have equal sum .
*/
#include<iostream>
using namespace std;
bool subarrayExists;

void inputArray(int arr[],int size){
    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

void runningSum(int arr[],int size){

    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
        arr[i]=sum;
    }
}

int subArrayEqualSum(int arr[],int size){
    int prefixSum=0,suffixSum=0;
    int totalSum=arr[size-1];
    for (int i = 0; i < size; i++)
    {
       prefixSum=arr[i];
       suffixSum=totalSum-prefixSum;
       if (prefixSum==suffixSum){
            subarrayExists=true;
            break;
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
    runningSum(array,n);
    cout<<"The running array is : ";
    printArray(array,n);
    cout<<endl; 
    subArrayEqualSum(array,n);
    if (subarrayExists==true)
        cout<<"The sub array exits of equal sum ";
    else
        cout<<"The sub array does not exists ";   
    return 0; 
}