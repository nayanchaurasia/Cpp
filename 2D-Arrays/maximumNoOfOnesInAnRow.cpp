/*
Given a boolean 2d array where each row is sorted .
find the row with the maximum no. of 1's
*/
#include<iostream>
#include<vector>
using namespace std;
int maxOneRow=-1;

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

int maxOnes(vector<vector<int>> &vec){
    int maxOnes=INT16_MIN;
    int column=vec[0].size();
    for (int i = 0; i < vec.size(); i++)
    {  
        for (int j = 0; j < vec[i].size(); j++)
        {   if (vec[i][j]==1){
                int maxNoOfOnes=column-j;
                if (maxNoOfOnes>maxOnes){
                    maxOnes=maxNoOfOnes;
                    maxOneRow=i;
                }
            }
        }
    }
    return maxOnes;
}

int main(){
int row,col;
vector<vector<int>> mat;
cout<<"enter the row and column ";
cin>>row;
cin>>col;
cout<<"enter the 2d matrix : ";

input_matrix( mat, row, col);

int maxOne;
maxOne=maxOnes(mat);
cout<<"the maximum numbers of 1's is in "<<maxOneRow+1<<" row are "<<maxOne;

}