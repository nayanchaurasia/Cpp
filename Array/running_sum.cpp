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

void runningSum(int arr[],int size){

    int sum=0;
    for (int i = 0; i < size; i++)
    {
        sum+=arr[i];
        arr[i]=sum;
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
     
}