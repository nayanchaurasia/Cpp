#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    int count=0,size,element;
    cout<<"Enter the size of the vector \n";
    cin>>size;
    cout<<"Enter the vectors values "<<endl;

    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
        if (size-1==i)
            element=ele;
    }

    for (int i = 0; i < size; i++)
    {
        if (element == v[i])
            count+=1;  
    }

    cout<<"the occurence of the last element of the vector is "<<count;
    //  for (int i = 0; i < size; i++)
    //    cout<<v[i];
   
}