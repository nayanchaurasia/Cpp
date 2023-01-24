/*
INPUT: for odd array :{1,2,3,2,1}   UNIQUE ELEMENT REST ELEMENT REPEATED 2 TIMES
SOL: WE WILL XOR ALL THE ELEMENTS WE WILL GET UNIQUE ELEMENT
sice a ^ a = 0;
*/
#include<iostream>
using namespace std;
int size;

int uniqueArrayByXor(int arr[]){
    int ans=0;
    for (int i = 0; i < size; i++)
        ans^=arr[i];
    return ans;
}

void printArray(int arr[]){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void inputArray(int arr[]){
    cout<<"enter the array :"<<endl;
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}
int main(){
    int array[1000];
    cout<<"enter the size of the array: "<<endl;
    cin>>size;
    inputArray(array);
    cout<<"your input array is :"<<endl;
    printArray(array);
    cout<<"the unique element of the arrray is : "<<uniqueArrayByXor(array);
    return 0;
}
