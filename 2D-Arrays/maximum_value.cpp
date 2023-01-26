#include<iostream>
using namespace std;

int main(){
int array[100][100],row,col;
cout<<"enter the number of rows: ";
cin>>row;
cout<<"enter the number of columns: ";
cin>>col;

cout<<"enter the array : ";
for (int i = 0; i < row; i++)
{
    for (int j = 0; j< col;j++)
        cin>>array[i][j];
}

int max=array[0][0];
for (int i = 0; i < row; i++)
{
    for (int j = 0; j < col;j++){
        if(max<array[i][j])
            max=array[i][j];
    }
}

cout<<"the maximum number in the given array is : "<<max;
return 0;
}