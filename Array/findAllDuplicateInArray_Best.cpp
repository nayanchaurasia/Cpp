/*
INPUT: {1,2,3,2,1}   DUPLICATE ELEMENT( multiple)
SOL: since a ^ a = 0      {XOR} OPERATION   
where ever it is true that element is repeated 
*/
#include<iostream>
using namespace std;
int size;

void dulpicateArrayByXor(int arr[]){

    cout<<"the repeated elements are :";

    for (int i = 0; i < size; i++){
        if (arr[i]==-1)
            continue;
        // this count is for the multiple duplicate elements(>2)
        int count=0;
        for (int j = i+1; j < size; j++){
            if ((arr[i]^arr[j])==0 && count==0){
                cout<<arr[i]<<" ";
                arr[j]=-1;
                count++;
           }
        }
    }
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
    dulpicateArrayByXor(array);
    return 0;
}
