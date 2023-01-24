/*
INPUT: two sorted array such that the an array has m + n elements where n elements are 0
and  the another array is of n elements,we have to merge the two array such that the 
output will be stored in the first array and it should be in non decreasing order
EX:
a={1 2 3 4 0 0 0} m=4,n=3
b={8 9 0}
output=a={0 1 2 3 4 8 9} 
*/

#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr){
    for (int i =0;i<arr.size();i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void inputArray(vector<int> &arr1,int size){
    for (int i=0 ; i<size; i++){
        int val;
        cin >> val;
        arr1.push_back(val);
    }
}

// v1 is the first array in which we will merge the arrays
vector<int> mergeArray(vector<int>&v1,vector<int> &v2,int start ){
    int c=0;
    for (int i = start; i < v1.size(); i++)
    {
        if (v1[i]==0)
            v1[i]=v2[c++];
    }
    printArray(v1);
// sorting:
    for (int i = 0; i < v1.size()-1; i++){
        if(v1[i]>v1[i+1]){
            int temp=v1[i];
            v1[i]=v1[i+1];
            v1[i+1]=temp;
        }
    }
printArray(v1);

return v1;
}

int main(){

vector<int> a,b;
// total_size=m+n;
int m,n;

cout<<"enter the number of elements in the first array :"<<endl;
cin>>m;
cout<<"enter the number of elements in the second array :"<<endl;
cin>>n;

cout<<"enter the first array :";
inputArray(a,m);
for (int i = 0; i < n; i++)
    a.push_back(0);

cout<<"enter the second array :";
inputArray(a,n);
cout<<endl<<a.capacity()<<endl;
cout<<"the  array is :";
printArray(a);
cout<<endl;
printArray(b);

a=mergeArray(a,b,m);

cout<<"the reverse array is :";
printArray(a);

return 0;
}