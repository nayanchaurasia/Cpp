/*
younhave to find the number of way to reach from initial point of array to the last element of 
an m*n matrix
*/
#include<iostream>
using namespace std;

void diffWays(int m,int n,int idxr,int idxc,int *ptr){
    if (idxr==m-1 && idxc==n-1) {
        (*ptr)+=1;
        return ;
    }
    if(idxr<m)
    diffWays(m,n,idxr+1,idxc,ptr);
    if(idxc<n)
    diffWays(m,n,idxr,idxc+1,ptr);
}

int main(){
    int m=2;
    int n=3;
    int count=0;
    diffWays(m,n,0,0,&count);
    cout<<count;
    return 0;
}
