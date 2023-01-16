/*                     PAIR SUM
total number of pair of elements having sum equal to the given value x;
*/
#include<iostream>
using namespace std;
int targetSum(int array[],int num,int sum){
    int count=0;
    for (int i = 0; i < num; i++)
    {
        for (int j = i+1; j < num; j++)
        {
            if (array[i]+array[j]==sum)
                count++;
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
    int n,a[1000],noOfPair,value;
    cout<<"enter the number of elements ";
    cin>>n;
    inputArray(a,n);
    cout<<"enter the sum ";
    cin>>value;
    noOfPair=targetSum(a,n,value);
    cout<<"the total number of pairs are : "<<noOfPair;
}