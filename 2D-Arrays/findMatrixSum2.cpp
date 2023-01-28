/*
find out the matrix sum :
INPUT:MATRIX+ TWO INTERVALS BETWEEN WHICH WE HAVE TO FIND THE SUM
OUTPUT: SUM OF MATRIX*/
#include<iostream>
#include<vector>
using namespace std;

// taking input and then storing row wise prefix sum matrix
void inputArray(vector<vector<int>> &v,int r,int c){
    for (int i = 0; i < r; i++)
    {   vector<int> vec;
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
}

// finding the sum by using the prefix sum
int matrixSum(vector<vector<int>> &v,int l1,int l2,int r1,int r2){
    int Sum=0;
    for (int i = l1 ; i <=l2; i++)
        Sum+=v[i][r2]-v[i][r1-1];
    return Sum;
}

int main(){
vector<vector<int>> vec;
int row,col;
cout<<"enter the row  of the matrix : ";
cin>>row;
cout<<"enter the column of the matrix : ";
cin>>col;

cout<<"enter the array : ";
inputArray(vec,row,col);

int l1,l2,r1,r2;
cout<<"enter the first coordinate (l1) : ";
cin>>l1;
cout<<"enter the first coordinate (r1) : ";
cin>>r1;

cout<<"enter the second coordinate(l2) : ";
cin>>l2;
cout<<"enter the second coordinate(r2) : ";
cin>>r2;

if (l1<=l2 && r1<=r2)
{
    int SUM=matrixSum(vec,l1,l2,r1,r2);
    cout<<"the sum of the given rectangular matix is : "<<SUM;
}else{
    cout<<"the interval is wrong ";
}

}