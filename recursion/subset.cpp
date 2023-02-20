#include<iostream>
#include<vector>
using namespace std;

void subset(int *arr,int n,int i,int sum,vector<int> &result){
    if (n==i) {
        result.push_back(sum);
        return ;
    }
    subset(arr,n,i+1,sum+arr[i],result);// pick the ith element
    subset(arr,n,i+1,sum,result);// dont pick the ith element
}

int main(){
    int arr[3]={2,4,5};
    int n=3;
    vector <int> v;
    subset(arr,n,0,0,v);
    for (int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    return 0;
}
