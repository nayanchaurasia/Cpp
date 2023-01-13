/*
INPUT=NORMAL ARRAY
OUTPUT=return an ans[i] array which consists the product of the elements of the array leaving
 that particular element
*/
#include<iostream>
using namespace std;
int ans[1000];

void inputArray(int arr[],int size){
    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void runningProduct(int arr[],int size){

    for (int i = 0; i < size; i++)
    {   int pro=1;
        for (int j = 0; j < size; j++)
        {
            if (i==j)
                continue;
            pro*=arr[j];      
        }    
        ans[i]=pro;
    }
}

int main(){
    int array[1000],n;
    cout<<"enter the size of the array\n";
    cin>>n;
    inputArray(array,n);
    cout<<"enterted array is : ";
    printArray(array,n);
    runningProduct(array,n);
    cout<<"The running product array is : ";
    printArray(ans,n);
}