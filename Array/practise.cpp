#include<iostream>
#include<vector>
using namespace std;
int main(){
    cout<<"enter ";
    vector<int>v(5);
    for (int i = 0; i < v.size(); i++){
        cin>>v[i];
    }

    for (int i = 0; i < v.size(); i++){
        cout<<v[i]<<" ";
    }
}
