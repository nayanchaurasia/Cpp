// find the difference of the sum of the even INDEXES to the sum of the oddd INDEXES
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector< int> v;
    int size,sumEven=0,sumOdd=0,diff;
    cout<<"enter the size of the vector\n";
    cin>>size;
    cout<<"Enter the vector \n";
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    
    for (int i = 0; i < size; i++)
    {
        if (i&1==1)// this is the condition to check even and odd 
            sumOdd+=v[i];
        else
            sumEven+=v[i];
    }
    
    cout<<"the differnce between even and odd indexs are "<< sumEven-sumOdd;
}