/* find minumum and maximum number*/
#include<iostream>
using namespace std;
int main(){
    int min,max,n;
    cout<<"enter the size of array ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    min=max=arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i]>max)
            max=arr[i];
        if (arr[i]<min)
            min=arr[i];
    }
    cout<<"MINIMUM NUMBER IS "<<min<<endl;
    cout<<"MAXiMUM NUMBER IS "<<max<<endl;
    for (int i = 0; i < n; i++)
        cout<<arr[i]<<" ";
}