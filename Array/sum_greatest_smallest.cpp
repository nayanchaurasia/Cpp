#include<iostream>
using namespace std;

void inputArray(int arr[],int size){

    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
    cin>>arr[i];
}

int sumGreatestSmallest(int arr[],int size){

    int greatest=INT8_MIN,smallest=INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>greatest)
            greatest=arr[i];
        if (arr[i]<smallest)
            smallest=arr[i];   
    }
    cout<<"smallest integers :"<<smallest<<" "<<"greatest integers:"<<greatest<<endl;

    return greatest+smallest;
}

int main(){
    int array[1000],n;
    cout<<"enter the size of the array \n";
    cin>>n;
    inputArray(array,n);
    cout<<"the sum of greatest and highest is "<<sumGreatestSmallest(array,n);
}