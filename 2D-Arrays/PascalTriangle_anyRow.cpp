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

vector<int> pascalTrinagle(int row){
    vector<int> vec;
    int i=row;
        for (int j = 0; j <= i; j++)
        {
            if(j==0 || j==i)
                vec.push_back(1);
            else{
                int n=factorial(i);
                int m=factorial(j);
                n/=m;
                m=factorial(i-j);
                n/=m;
                vec.push_back(n);
            }
        }
    return vec;
}

int main(){
int r;
vector<int> ans;
// SINCE ROW NO==COLUMN NO. IN PASCAL TRIANGLE  
cout<<"enter the row number : ";
cin>>r;
ans=pascalTrinagle(r);

for (int i = 0; i < ans.size(); i++)
        cout<<ans[i]<<" ";    

}