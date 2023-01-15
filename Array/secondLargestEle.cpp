/* find second largest number in the array 
CONCEWPT:
1 FIND THE largest
2then manupulate it by giving some less value
3 then find the largest number that will be equal to the
second largest number
*/
#include<iostream>
using namespace std;
int maximum(int array[],int num){
    int maxi=array[0];
    for (int i = 1; i < num; i++)
    {
        if (array[i]>maxi)
            maxi=array[i];
    }
    return maxi; 
}

void inputArray(int array[],int num){
    cout<<"enter the elements : ";
    for (int i = 0; i < num; i++)
        cin>>array[i];  
}


int main(){
    int a[1000],n,largest,secondlar;
    cout<<"enter the size of array ";
    cin>>n;
    inputArray(a,n);
    largest=maximum(a,n);
    for (int i = 0; i < n; i++)
    {
        if(a[i]==largest){
            a[i]=0;
        //we will not use break bez there are chances of multiple max values 
        //in that araray
        }
    }
    secondlar=maximum(a,n);
    cout<<"second largest element is "<<secondlar;
}
/*
IN TWO ITERATION
first find max
then run an iteration with condition a[i]>secondmax && a[i]<max
to avoid multiple max values and finding second max and reduce the itertions 
from 3 to 2*/