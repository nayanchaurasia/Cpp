
#include<iostream>
using namespace std;
void rotate(int array[],int num,int value){
    //ROTATING CLOCKWISE
    for (int j = 0; j < value; j++)
    {   int temp=array[num-1];
        for (int i = num-1; i>=0 ; i--)
        {   
            array[i]=array[i-1];
            if (i==0)
                array[0]=temp;
        }
    //ROTATING ANTI CLOCKWISE        
        /*  OR  
            int temp=a[0];
            for (int i=0;i<size;i++)
                a[i]=a[i+1];
                if i==size-1
                    a[i]=temp;
        
        */
        
    }
}
void printArray(int *arr1,int num){
    cout<<" the array is \n";
    for (int i = 0; i < num; i++)
        cout<<arr1[i]<<" ";
}
void inputArray(int array[],int num){
    cout<<"enter the elements : ";
    for (int i = 0; i < num; i++)
        cin>>array[i];  
}
//main function
int main(){
    int a[1000],n,k;
    cout<<"enter the size of array ";
    cin>>n;
    inputArray(a,n);
    cout<<"enter the value of k ";
    cin>>k;
    rotate(a,n,k);
    printArray(a,n);
}
