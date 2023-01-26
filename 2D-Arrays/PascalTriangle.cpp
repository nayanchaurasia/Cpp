/*
print the pascal triangle
*/
#include<iostream>
#include<vector>
using namespace std;

int factorial(int num){
    int fac=1;
    for (int i = num; i > 1; i--)
        fac*=i;
    return fac;
}

vector<vector<int>> pascalTriangle(int row){
    vector<vector<int>> vec(row);
    for (int i = 0; i < row; i++)
    {   vector<int> v;

        for (int j = 0; j <= i; j++)
        {
            if(j==0 || j==i)
                v.push_back(1);
            else{
                int n=factorial(i);
                int m=factorial(j);
                n/=m;
                m=factorial(i-j);
                n/=m;
                v.push_back(n);
            }
        }
        vec.push_back(v);
    }
    return vec;
}

int main(){
int r;
vector<vector<int>> ans;
// SINCE ROW NO==COLUMN NO. IN PASCAL TRIANGLE  
cout<<"enter the number of lines in pascal triangle : ";
cin>>r;
ans=pascalTriangle(r);
for (int i = 0; i < ans.size(); i++)
    {
        for (int j = 0; j < ans[i].size(); j++)
            cout<<ans[i][j]<<" ";
        cout<<endl;    
    }
}