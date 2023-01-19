#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    int size,count;
    cout<<"Enter the size of the vector \n";
    cin>>size;
    cout<<"Enter the vectors values "<<endl;

    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    for (int i = 0; i < size-1; i++)
    {
        if (v[i+1]<v[i]){
            cout<<"the given vector is not sorted"<<endl;
            count=1;
            break;
        }  
    }
    if (count!=1){
    cout<<"the given vector is sorted"<<endl; 
    }
}