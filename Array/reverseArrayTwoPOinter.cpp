/* reveresing the arrray using the two pointer approach as well as vector
*/
#include<iostream>
#include<vector>
using namespace std;

void printArray(vector<int> &arr){
    for (int i : arr)
        cout<<i<<" ";
    cout<<endl;
}

void inputArray(vector<int> &arr,int size){
    cout<<"enter the array : ";
    for (int i=0 ; i<size; i++){
        int val;
        cin >> val;
        arr.push_back(val);
    }
}

void reverseArray(vector<int>&v){
    int start=0,end=v.size()-1;
    for (int i = start , j=end ; i < j; i++,j--)
    {
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
    }
    
}

int main(){

vector<int> a;
int n;
cout<<"enter the number of elements in the array :"<<endl;
cin>>n;
inputArray(a,n);
cout<<"input array is : ";
printArray(a);
reverseArray(a);
cout<<"the reverse array is :";
printArray(a);
return 0;
}