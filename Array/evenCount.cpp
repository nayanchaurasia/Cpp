/*find even and odd number count in the given array*/
#include<iostream>
using namespace std;
int main(){
    int evenCount=0,oddCount=0,n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    cout<<"enter the array ";
    for (int i=0;i<n;i++){
        cin>>arr[i];
        if (arr[i]%2==0)
            evenCount+=1;
        else
            oddCount+=1;
    }
    cout<<"even count "<<evenCount<<" odd count "<<oddCount;
}