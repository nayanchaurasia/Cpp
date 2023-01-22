/*
by using the concept of sorting 0 and 1 we will do this sorting
  POINTER CONCEPT
INPUT ==ARRAY 1 2 3 4 5 9 8
OUTPUT ARRAY == 2 4 8 1 3 5 9 (FIRSTLY EVEN THEN ODD TERMS IGNORING THEIR 
OWN ORDER OF SORTING)

IN THIS CODE WE WILL ADD THE SORTING OF INDIVIDUAL INTEGERS LIKE EVEN AND ODD]BY 
KNOWING THERE COUNT;
*/
#include<iostream>
using namespace std;
// global variable
int evenNo=0;

void inputArray(int arr[],int size){
    cout<<"enter the array \n";
    for (int i = 0; i < size; i++){
        cin>>arr[i];
        if (arr[i]%2==0)
            evenNo+=1;
    }
}

void printArray(int arr[],int size){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
}

void sortingEvenandOdd(int arr[],int size){

    int left_ptr=0,right_ptr=size-1;
    while (left_ptr<right_ptr)
    {
        while(arr[left_ptr]%2==0 &&  left_ptr<right_ptr)
            left_ptr++;
        while (arr[right_ptr]%2==1 && left_ptr<right_ptr)
            right_ptr--;
        if (left_ptr<right_ptr )
        {
            int temp=arr[left_ptr];
            arr[left_ptr++]=arr[right_ptr];
            arr[right_ptr--]=temp;
        }
    }
}

void sortingIndividualEvenAndOdd(int arr[],int size){

    //for even part of array
    // BUBBLE SORT
    for (int i = 0; i < evenNo-2; i++)
    {
        for (int j  = 0; j < evenNo-1; j++)
        {  
            if (arr[j+1]<arr[j])
            {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
    /*
    for odd part of array
    if we want to sort an array the outer loop will be 1 times less then the size of
    the array  for sorting 10 time the outer loop will run for 9 times
     
     */
    for (int i = evenNo; i < size-2; i++)
    {
        for (int j  = evenNo; j < size-1; j++)
        {  
            if (arr[j+1]<arr[j])
            {
               int temp=arr[j];
               arr[j]=arr[j+1];
               arr[j+1]=temp;
            }
        }
    }
}

int main(){
    int array[1000],n;
    cout<<"enter the size of the array\n";
    cin>>n;
    inputArray(array,n);
    cout<<"enterted array is : ";
    printArray(array,n);
    cout<<endl;   
    sortingEvenandOdd(array,n); 
    cout<<"the given sorted array is : ";
    printArray(array,n);
    sortingIndividualEvenAndOdd(array,n);
    cout<<"the given sorted array is : ";
    printArray(array,n);
}