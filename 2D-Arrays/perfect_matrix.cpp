/*
check wether the matrix is perfect or not
perfect matrix is 
1 2 3 4
4 1 2 3 
7 4 1 2 
diagonally elements are same;

sol: we will skip the first row and the column and will 
check the elements diagonally
*/
#include<iostream>
#include<vector>
using namespace std;

void input_matrix(vector<vector<int>> &vec,int r,int c){
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

bool perfectMatric(vector<vector<int>>&v){
    for (int i = 1; i < v.size(); i++)
    {
        for (int j = 1; j < v[i].size(); j++){
            if (v[i][j]!=v[i-1][j-1])
                return false;
        }
    }
    return true;
}

int main(){
int row,col;
vector<vector<int>> mat;
cout<<"enter the row and column ";
cin>>row;
cin>>col;
cout<<"enter the 2d matrix : ";

input_matrix( mat, row, col);

if(perfectMatric(mat))
    cout<<"the given matrix is perfect ";
else
    cout<<"the given matrix is not perfect ";

return 0;
}