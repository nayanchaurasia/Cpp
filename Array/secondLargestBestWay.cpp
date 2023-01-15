
#include<iostream>
using namespace std;
int secondLargest(int array[],int num){
    int largest=array[0],secLar=array[0];
// find the largest
    for (int i = 0; i < num; i++)
    {
        if(array[i]>largest)
            largest=array[i];
    }
// compare with largest to find the second largest element
    for (int i = 1; i < num; i++)
    {
        // inplace of array[i]<largest we can also write that array[i]!=largest
        if (array[i]<largest && array[i]>secLar)
            secLar=array[i];
    }
    return secLar; 
}
// input the array function
void inputArray(int array[],int num){
    cout<<"enter the elements : ";
    for (int i = 0; i < num; i++)
        cin>>array[i];  
}
//main function
int main(){
    int a[1000],n,secondlar;
    cout<<"enter the size of array ";
    cin>>n;
    inputArray(a,n);
    secondlar=secondLargest(a,n);
    cout<<"second largest element is "<<secondlar;
}
