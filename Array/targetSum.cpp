#include<iostream>
using namespace std;

void inputArray(int arr[],int size){
    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}

void targetSum(int arr[],int size,int sum){

    for (int i = 0; i < size-1; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if(sum==(arr[i]+arr[j]))
                cout<<"["<<arr[i]<<","<<arr[j]<<"] ";
        }   
    }
}

int main(){
    int array[100],value,n;
    cout<<"enter the size of the array ";
    cin>>n;
    inputArray(array,n);
    cout<<"enter the sum whose pair u want \n";
    cin>>value;
    targetSum(array,n,value);
}
