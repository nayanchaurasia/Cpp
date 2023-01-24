/*
 INPUT= ARRAY, INITIAL INDEX,FINAL INDEX [INCLUSIVE]
 OUTPUT=AND THE DISPLAY THE SUM BETWWEEN THEM
*/
#include<iostream>
using namespace std;

void inputArray(int arr[],int size){

    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
    cin>>arr[i];
}

int sumBwIndexes(int arr[],int size,int indx1,int indx2){

    int sum=0;
    for (int i = indx1; i <= indx2; i++)
        sum+=arr[i];
    return sum;
}

int main(){
    int array[1000],n;
    int iIndex,fIndex;
    cout<<"enter the size of the array \n";
    cin>>n;
    inputArray(array,n);
    cout<<"enter the intial index  \n";
    cin>>iIndex;
    cout<<"enter the final index \n";
    cin>>fIndex;
    cout<<"the sum between index "<<iIndex<< " and "<<fIndex<<"is ";
    cout<<sumBwIndexes(array,n,iIndex,fIndex);
}