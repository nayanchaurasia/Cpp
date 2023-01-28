/*
input= intervals[i]=[start,end]
output= find the overlapping intervals
create a function which return an vector having
non overlapping intervals  
that will cover all the intervals in the inputs
*/
#include<algorithm>
#include<iostream>
#include<vector>

using namespace std;

void input_matrix(vector<vector<int>> &vec,int r,int c=2){
    for (int i = 0; i < r; i++)
    {   vector<int> v;
        for (int j = 0; j < c; j++){
            int val;
            cin>>val;
            v.push_back(val);
        }
        vec.push_back(v);
    }
}

vector<vector<int>> nonOverlapping(vector<vector<int>>&v){
    vector<vector<int> > ans;
    ans.push_back(v[0]);
    int j=0;
    for (int i = 1; i < v.size(); i++)
    {   // overlapping
        if (ans[j][1]>=v[i][0]){
            ans[j][1]=max(ans[j][1],v[i][1]);
        }
        // not overlapping 
        if (ans[j][1]<v[i][0]){
            ans.push_back(v[i]);
            j++;
        }
    }
    return ans;
}

int main(){
int row;
vector<vector<int>> interval;
vector<vector<int>> final;
cout<<"enter the number of intervals ";
cin>>row;
cout<<"enter the 2d matrix : ";

input_matrix( interval, row);

//this is the function in the alogrithm header file
sort(interval.begin(),interval.end());

for (int i = 0; i < interval.size(); i++)
    {
        for (int j = 0; j < interval[i].size(); j++){
            cout<<interval[i][j]<<" ";
        }
        cout<<endl;
    }

final=nonOverlapping(interval);
cout<<"the non overlapping interval is : ";

 for (int i = 0; i < final.size(); i++)
    {
        for (int j = 0; j < final[i].size(); j++){
            cout<<final[i][j]<<" ";
        }
        cout<<endl;
    }
return 0;
}