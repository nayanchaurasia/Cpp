/*
find out the matrix sum :
INPUT:MATRIX+ TWO INTERVALS BETWEEN WHICH WE HAVE TO FIND THE SUM
OUTPUT: SUM OF MATRIX*/
#include<iostream>
#include<vector>
using namespace std;

// taking input and then storing row-wise and column-wise prefix sum
void inputArray(vector<vector<int>> &v,int r,int c){
    for (int i = 0; i < r; i++)
    {   // row-wise column sum
        vector<int> vec;
        int sum=0;
        for (int j = 0; j < c; j++)
        {
            int val;
            cin>>val;
            sum+=val;
            vec.push_back(sum);
        }
        v.push_back(vec);
    }
    cout<<"the row array is : "<<endl;
    for (int i = 0; i < r; i++)
    {   
        for (int j = 0; j < c; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }

    // column wise prefix sum
    for (int i = 1; i < r; i++)
    { 
        for (int j = 0; j < c; j++){
            v[i][j]+=v[i-1][j];
            }
    }
    
    cout<<"the final array is : "<<endl;
    for (int i = 0; i < r; i++)
    {   
        for (int j = 0; j < c; j++)
            cout<<v[i][j]<<" ";
        cout<<endl;
    }
}
int main(){
vector<vector<int>> vec;
int row,col;
int l1,l2,r1,r2;

cout<<"enter the row  of the matrix : ";
cin>>row;
cout<<"enter the column of the matrix : ";
cin>>col;

cout<<"enter the array : ";
inputArray(vec,row,col);

cout<<"enter the first coordinate (l1) : ";
cin>>l1;
cout<<"enter the first coordinate (r1) : ";
cin>>r1;

cout<<"enter the second coordinate(l2) : ";
cin>>l2;
cout<<"enter the second coordinate(r2) : ";
cin>>r2;

int leftSum=0;
int topSum=0;
int topLeftSum=0; 

if (l1!=0)
    topSum=vec[l1-1][r2];
if (r1!=0)
    leftSum=vec[l2][r1-1];
if (r1!=0 && l1!=0)
    topLeftSum=vec[l1-1][r1-1];
if (l1<=l2 && r1<=r2)
{     
    int SUM=vec[l2][r2]-leftSum-topSum+topLeftSum;
    cout<<"the sum of the given rectangular matix is : "<<SUM;
}else{
    cout<<"the interval is wrong ";
}

}