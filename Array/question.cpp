/*
​Given an array of size ‘n’ (initially zero) and ‘q’ number of updates where in each update
we can increase the value of all index from index l to index r with value x and in the end
print all the numbers of the array.
Input:
Output:
q = 3, x = 5, n = 5
[l,r] = {{0,3}, {4,4}, {1,2}
[5 10 10 5 5]

Solution:
creating 2d array for l and r
inside 2d array we will call a function for updating the values
*/

#include<iostream>
using namespace std;
int ans[1000];

void inputArray(int arr[][2],int row,int col=2){
    cout<<"enter the array \n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cin>>arr[i][j];
}

void printArray(int arr[][2],int row,int col=2){
    cout<<"enter the array \n";
    for (int i = 0; i < row; i++)
        for (int j = 0; j < col; j++)
            cout<<arr[i][j]<<" ";
        cout<<endl;
}

void printArray(int arr[],int size){
    for (int i = 0; i<size; i++)
        cout<<arr[i]<<" ";
}

// l and r are the indexes of the initial and the final point
void update(int array[],int l,int r ,int value){

    for (int i = l ; i <= r; i++)
        array[i]+=value;
}

void finalUpdate(int arr[][2],int arr2[],int row,int value){
    for (int i = 0; i < row; i++)
    { 
        int l=arr[i][0];
        int r=arr[i][1];
        update(arr2,l,r,value);
    }
}

int main(){
    int array[1000][2],q,c=2,x,n;
    //querie===row of the array
    int input[1000]={0};
    cout<<"enter the queries of the array\n";
    cin>>q;
    cout<<"enter the value of x\n";
    cin>>x;
    cout<<"enter the size of zero array\n";
    cin>>n;
    cout<<"enter the updates l,r : \n";
    inputArray(array,q,2);
    cout<<"the enetered array is :"<<endl;
    printArray(array,q,2);
    finalUpdate(array,input,q,x);
    // for finding the size of array which has the max updated value
    cout<<"The updated array is : ";
    printArray(input,n);
}