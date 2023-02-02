/*
Using pointers, find the sum of elements present on the primary diagonal of the given n x 
n 2-D matrix.

The first line of input contains the n, the size of the matrix.

The next n lines contain the number of elements present in each row of the matrix.

input:
3
1 2 3 
4 5 6
7 8 9
output: 15
*/
#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cout<<"enter the size of array : ";
    cin>>n;  
    int a[100][100];
    cout<<"enter the array: ";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin>>a[i][j];

    for (int i = 0; i <n; i++){
        for (int j = 0; j < n; j++)
        {
            if(i==j)
                sum+=*(*(a+i)+i);
        }
    }
    
    cout<<"the sum of diagonal elements is : "<<sum;
    return 0;
}