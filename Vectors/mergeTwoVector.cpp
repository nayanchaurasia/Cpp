/*
INPUT= two arrays of length ma nd n where to arrays are sorted
output= new vector(size will be m+n)
*/
#include<iostream>
#include<vector>
using namespace std;
void inputVector (vector<int> &v,int size){
    cout<<"enter the array : ";
    for (int i = 0; i < size; i++){
        int val;
        cin>>val;
        v.push_back(val);
    }
}

int main(){
    vector<int> arr1;
    vector<int> arr2;
    vector<int> arr;
    int m,n;
    
    cout<<"enter the size of the first array : ";
    cin>>m;
    inputVector(arr1,m);
    cout<<"enter the size of the second array : ";
    cin>>n;
    inputVector(arr2,m);
   
    int i=0,j=0,k=0;
    // comparing and putiing the elements in the array
    while (i<m && j<n){
        if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;
            i++;
        }else{
            arr[k]=arr2[j];
            k++;
            j++;
        }
    }
    
    // if array 1 is exhausted i.e i==m and j != n
    while (j<n)
    {
        arr[k]=arr2[j];
        j++;
        k++;
    }
    
    // if array 2 is exhausted i.e 
    while (i<m)
    {
        arr[k]=arr1[i];
        i++;
        k++;
    }

    for (int i = 0; i < arr.size(); i++)
        cout<<arr[i]<<" ";
    
}