/*
INPUT=SQUARE MATRIX OUTPUT: ROTATE IT BY 90 DEGREE
EX
input        output
1 2 3        7 4 1
4 5 6        8 5 2
7 8 9        9 6 3 
input={1 2 3 4 5 6 7 8 9}
output={7 4 1 8 5 2 9 6 3}
*/
#include<iostream>
#include<vector>
using namespace std;

int main(){
int array[100][100],n;
cout<<"enter the size of square matrix : ";
cin>>n;

cout<<"enter the array : ";
for (int i = 0; i < n; i++)
{
    for (int j = 0; j< n;j++)
        cin>>array[i][j];
}
//transposeof the matrix   
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < i; j++){
        int temp=array[i][j];
        array[i][j]=array[j][i];
        array[j][i]=temp;
    }
}

// for swapping
for(int i=0;i<n;i++)
{   // n/2 for the half matrix only

    for(int j=0;j<n/2;j++)
    {   
        int temp=array[i][j];
        array[i][j]=array[i][n-j-1];
        array[i][n-j-1]=temp;
    }
}

cout<<"the rotated array is : "<<endl;
for (int i = 0; i < n; i++)
{
    for (int j = 0; j< n;j++)
        cout<<array[i][j]<<" ";
    cout<<endl; 
}
return 0;
}