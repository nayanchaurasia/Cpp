/*
INPUT  : squared matrix 
Output: a upper triangulated matrix 
*/
#include<iostream>
#include<vector>
using namespace std;

// taking input and then storing row wise prefix sum matrix
void inputArray(vector<vector<int>> &v,int r){
    for (int i = 0; i < r; i++)
    {   vector<int> vec;
        for (int j = 0; j < r; j++)
        {
            int val;
            cin>>val;
            vec.push_back(val);
        }
        v.push_back(vec);
    }
}

// returning the upper triangular matrix:
void upperMatrix(vector<vector<int>> &v){
    for (int i = 0 ; i <v.size(); i++){
        for (int j = 0; j <v.size() ; j++)
        {
            if (j>=i)
                cout<<v[i][j]<<" ";
            else
                cout<<"  ";
        }
        cout<<endl;
    }
}

int main(){
vector<vector<int>> vec;
int row;
cout<<"enter the size of the square matrix : ";
cin>>row;

cout<<"enter the square array : ";
inputArray(vec,row);

upperMatrix(vec);

return 0;
}
