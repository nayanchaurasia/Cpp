/*
    INPUT= ARRAY OF 0 AND 1
    OUTPUT=MAX NO. OF 1 AND 0 IN A SEQUENCE
*/
#include<iostream>
using namespace std;

void inputArray(int arr[],int size){

    cout<<"enter the array \n";
    for (int i = 0; i < size; i++)
    cin>>arr[i];
}

void printArray(int arr[],int size){
    cout<< " the array is \n";
    for (int i = 0; i < size; i++)
        cout<< arr[i]<<" ";
} 

int max_Array(int arr[],int size){

    int greatest=INT8_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]>greatest)
            greatest=arr[i]; 
    }
    return greatest;
}

int min_Array(int arr[],int size){

    int smallest=INT8_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i]<smallest)
            smallest=arr[i];   
    }
    return smallest;
}

int main(){
    int array[1000],n;
    cout<<"enter the size of the array \n";
    cin>>n;
    inputArray(array,n);

    // concept 
    //  seq_1[50]={0} means it will contains the length of the sequence..same for 0's
    int seq_1[50]={0}, seq_0[50]={0};
    int count_1=0,count_0=0,idx_1=0,idx_0=0;
    for (int i = 0; i < n; i++)
    {
        if (array[i]==1){
            count_1+=1;
            if (count_1==1){
                seq_0[idx_0]=count_0;
                count_0=0;
                idx_0+=1;
            }
        }
        else{
            count_0+=1;
            if (count_0==1){
                seq_1[idx_1]=count_1;
                idx_1+=1;
                count_1=0;
            }
        }
    }
    cout<<"1 seq "; 
    printArray(seq_1,50);
    cout<<endl;
    cout<<"0 seq ";
    printArray(seq_0,50);

}