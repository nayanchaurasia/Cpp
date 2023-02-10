/*
if a frog is at the first stone and he can jump the onto the another stone such that he can jump  to next or next to next stone
such that the cost of each jump is equal to the absolute difference of the height |hi-hj|  where j == i+1 or i+2
so find the jump of the frog such that the cost of the toatl jump is minimum;
Input:
n=4
arr[]={10,30,40,20}
output=20;
*/
#include<iostream>
using namespace std;

int frog(int *h,int n,int idx){
    // at last by itself it is 0
    if(idx==n-1) return 0;
    if(idx==n-2) return abs(h[idx]-h[idx+1]);

    return min(frog(h,n,idx+1)+abs(h[idx]-h[idx+1]),frog(h,n,idx+2)+abs(h[idx]-h[idx+2]));
}

int main(){
    int num=4,arr[]={10,30,40,20};
    int cost; 
    cost=frog(arr,num,0);
    cout<<cost;
}
