/*
find the unique element in the array where there are all numbers which are repeated
 2 times leaving that number
*/
#include<iostream>
using namespace std;
int element(int array[],int num){
    for (int i = 0; i < num; i++)
    {   int count=2;
        if (array[i]==-1)
            continue;

        for (int j = i; j < num; j++)
        {
            if (array[i]==array[j]){
                if (count==1)
                    array[j]=-1;
                count--;
            }
            
        }
        if (count==1)
            return array[i];  
            /* ORR ANOTHER LOGIC 2
            for i 
            for j=i+1..
            if array[i]==array[j]
            then array[i]=array[j]=-1
            now in the function run an array and find the element which is non zero that
            is the unique element in the given array
            */  
    }
}
void inputArray(int array[],int num){
    cout<<"enter the elements : ";
    for (int i = 0; i < num; i++)
        cin>>array[i];  
}
int main(){
    int n,a[1000],uniqueEle;
    cout<<"enter the number of elements ";
    cin>>n;
    inputArray(a,n);
    uniqueEle=element(a,n);
    cout<<"the unique element is  : "<<uniqueEle;
}