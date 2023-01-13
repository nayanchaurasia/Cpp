#include<iostream>
using namespace std;

void inputArray(int arr[],int size){

    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
    cin>>arr[i];
}

void countEvenOdd(int arr[],int size){

    int countEven=0,countOdd=0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]%2==0)
            countEven+=1;
        else
            countOdd+=1;
    }
    cout<<"even integers :"<<countEven<<" "<<" odd integers :"<<countOdd;
}

int main(){
    int array[1000],n;
    cout<<"enter the size of the array \n";
    cin>>n;
    inputArray(array,n);
    countEvenOdd(array,n);
}