/*
find the intersection between the two arrays
input:two arrays
outpu: intersection array
*/
#include<iostream>
using namespace std;
int interSec[1000]={0};

void printArray(int arr[], int size){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void inputArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}

void intersection (int a1[],int a2[],int size1,int size2){
    int c=0;
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (a1[i]==a2[j])
            {
                interSec[c++]=a1[i];
                a2[j]=-1;
            }   
        }   
    }
}

int main(){
    int a[1000],b[1000];
    int n1,n2;
    cout<<"enter the size of the first array: "<<endl;
    cin>>n1;
    cout<<"enter the size of the second array: "<<endl;
    cin>>n2;
    cout<<"enter the first array : ";
    inputArray(a,n1);
    cout<<"enter the second array : ";
    inputArray(b,n2);
    intersection(a,b,n1,n2);
    cout<<"the intersecting elements are : ";
    for (int i = 0; interSec[i] != 0; i++)
        cout<<interSec[i]<<" ";
    return 0;
}