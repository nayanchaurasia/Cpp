/*
if the occurence of each number of array is unique then return 2 otherwise 0;
ex input={1,2,3,1,2,2}
1=2 times
2= 3 times
3=1 times 
since the occurence is unique return true
otherwise false
*/
#include<iostream>
using namespace std;
int size;

void printArray(int arr[]){
    for (int i = 0; i < size; i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

int uniqueOccurence(int arr[]){
    int ans[1000];
    for (int i=0; i < size; i++)
        ans[i]=-1;   
    // making the array which store the resultant of each element at there respective index
    for (int i = 0; i < size; i++){
        if(arr[i]==-1)
           continue;
        int count=1;
        for (int j = i+1; j < size; j++)
        {   if (arr[i]==arr[j]){
                count++;
                arr[j]=-1;
            }
        }
        ans[i]=count;
    }
    printArray(ans);
    // checking the count array that is there are unique elements or not
    for (int i = 0; i < size; i++)
    {   if (ans[i]==-1)
            continue;
        for (int j =i+1; j < size; j++)
        {
            if(ans[i]==ans[j])
                return false;
        }
    }    
    return true;
}

void inputArray(int arr[]){
    cout<<"enter the array :"<<endl;
    for (int i = 0; i < size; i++)
        cin>>arr[i];
}
int main(){
    int array[1000];
    cout<<"enter the size of the array: "<<endl;
    cin>>size;
    inputArray(array);
    cout<<"your input array is :"<<endl;
    printArray(array);
    cout<<"the output is "<<uniqueOccurence(array);
    return 0;
}
