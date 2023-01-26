/*
INPUT: ENTER THE N
OUTPUT: AN N*N MATRIX IN WHICH THE DATA IS STORE DIN SPIRAL ORDER
FORM 1 TO N2
*/
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;

void print_matrix(vector<vector<int>> &vec,int r){
    for (int i = 0; i < r; i++)
    {   
        for (int j = 0; j < r; j++){
            cout<<vec[i][j]<<" ";
        }
        cout<<endl;
    }
}

void spiralArray(vector<vector<int>>&v,int row){
    int left=0;
    int right=row-1;
    int top=0;
    int bottom=row-1;
    int direction=0;
    int val=1;
    while (top<=bottom && left<=right)
    {
        if (direction==0)
        {// from left to right
            for (int col = left; col <= right; col++)
                v[top][col]=val++;
            top++;
        }
        
        else if (direction==1)
        {// for top to bottom
            for (int row = top; row <= bottom; row++)
                v[row][right]=val++;
            right--;
        }
        
        else if (direction==2)
        {// from right to left
            for (int col = right; col>= left; col--)
                v[bottom][col]=val++;
            bottom--;
        }
        
        else 
        {// from bottom to top
            for (int col = bottom; col >= top; col--)
                v[col][left]=val++;
            left++;
        }
        direction=(direction+1)%4;
    }
}

int main(){
int row;
cout<<"enter the N : ";
cin>>row;
vector<vector<int>> array(row,vector<int>(row,0));
spiralArray(array,row);
print_matrix( array, row);

return 0;
}