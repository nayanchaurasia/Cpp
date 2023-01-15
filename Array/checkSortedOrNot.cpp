#include<iostream>
using namespace std;
int checkSorted(int array[],int num){
    for (int i = 1; i < num; i++)
    {
        if(!(array[i]>=array[i-1]))
            return 0;
    }
    return 1;
}
void inputArray(int array[],int num){
    cout<<"enter the elements : ";
    for (int i = 0; i < num; i++)
        cin>>array[i];  
}
int main(){
    int n,a[1000],count;
    cout<<"enter the number of elements ";
    cin>>n;
    inputArray(a,n);
    count=checkSorted(a,n);
    if (count==1)
        cout<<"SORTED ";
    else 
        cout<<"UNSORTED ";
}