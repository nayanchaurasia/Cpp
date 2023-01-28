/*
input= intervals[i]=[start,end]
output= find the number of intervals removed when we will 
create a vector having non overlapping intervals  
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

int removedInt(vector<vector<int>>&v){
    vector<vector<int> > ans;
    //counter for the removed 1D vector 
    int count=0;
    ans.push_back(v[0]);
    int j=0;
    for (int i = 1; i < v.size(); i++)
    {   // overlapping
        if (ans[j][1]>=v[i][0]){
            ans[j][1]=max(ans[j][1],v[i][1]);
        }
        if (ans[j][1]>=v[i][0] && ans[j][1]>v[i][1] && ans[j][0]<=v[i][0])
            count++;
        
        // not overlapping 
        if (ans[j][1]<v[i][0]){
            ans.push_back(v[i]);
            j++;
        }
    }
    return count;
}

int main(){
int row;
vector<vector<int>> interval;
int removedIntervals;
cout<<"enter the number of intervals ";
cin>>row;
cout<<"enter the intervals : ";

input_matrix( interval, row);

//this is the function in the alogrithm header file
sort(interval.begin(),interval.end());

removedIntervals=removedInt(interval);

cout<<"the removed intervals are : "<<removedIntervals;

return 0;
}