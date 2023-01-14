#include<iostream>
#include<vector>
using namespace std;
int main(){
cout<<"enter the array :";
vector<int>v(6);
//v.resize(4);
for (int i = 0; i < v.size(); i++)
    cin>>v[i];
//v.push_back(100); 
for (int i = 0; i < v.size(); i++)
    cout<<v[i]<<" ";
//v.clear();
//v.insert(v.end()-1,1000);
for (int i=0;i<v.size();i++)
    v.push_back(i);
cout<<endl<<v.capacity()<<endl;
for (int i = 0; i < v.size(); i++)
    cout<<v[i]<<",";
//v.;  

}