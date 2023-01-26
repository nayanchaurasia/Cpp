#include<algorithm>
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

void spiralArray(vector<vector<int>>&v,int row,int col){
    int left=0;
    int right=col-1;
    int top=0;
    int bottom=row-1;
    int direction=0;
    while (top<=bottom && left<=right)
    {
        if (direction==0)
        {// from left to right
            for (int col = left; col <= right; col++)
                cout<<v[top][col]<<" ";
            top++;
        }
        
        else if (direction==1)
        {// for top to bottom
            for (int row = top; row <= bottom; row++)
                cout<<v[row][right]<<" ";
            right--;
        }
        
        else if (direction==2)
        {// from right to left
            for (int col = right; col>= left; col--)
                cout<<v[bottom][col]<<" ";
            bottom--;
        }
        
        else 
        {// from bottom to top
            for (int col = bottom; col >= top; col--)
                cout<<v[col][left]<<" ";
            left++;
        }
        direction=(direction+1)%4;
    }
}

int main(){
int row,col;
vector<vector<int>> array;
cout<<"enter the number of row ";
cin>>row;
cout<<"enter the number of column ";
cin>>col;
cout<<"enter the array : ";

input_matrix( array, row,col);
spiralArray(array,row,col);
return 0;
}