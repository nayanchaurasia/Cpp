/*
total number of triplet pair of elements having sum equal to the given value x;
*/
#include<iostream>
using namespace std;
int tripleSum(int array[],int num,int sum){
    int count=0;
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            for (int k = j+1; k < num; k++)
            {
                if (array[i]+array[j]+array[k]==sum)
                    count++;
            }

        }
    }
    
    return count;
}
void inputArray(int array[],int num){
    cout<<"enter the elements : ";
    for (int i = 0; i < num; i++)
        cin>>array[i];  
}
int main(){
    int n,a[1000],noOfTriplets,value;
    cout<<"enter the number of elements ";
    cin>>n;
    inputArray(a,n);
    cout<<"enter the sum ";
    cin>>value;
    noOfTriplets=tripleSum(a,n,value);
    cout<<"the total number of pairs are : "<<noOfTriplets;
}