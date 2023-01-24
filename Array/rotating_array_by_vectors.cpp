#include<iostream>
#include<vector>
// HEADER FILE FOR THE REVERSE FUNCTION FOR VECTOR:
#include<algorithm>
using namespace std;
int main(){
    vector<int> v;
    int size,k;
    cout<<"Enter the size of the vector \n";
    cin>>size;
    cout<<"Enter the vectors values "<<endl;
    // this each for loop we can use to take input for array:
    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }
    cout<<"Enter the value of k \n";
    cin>>k;
    if (k>=size)
       k%=size;
    reverse(v.begin(),v.end());
    reverse(v.begin(),v.begin()+k);
    reverse(v.begin()+k,v.end());
    for(int ele:v)
        cout<<ele<<" ";
}