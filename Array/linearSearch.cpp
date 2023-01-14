#include<iostream>
using namespace std;
int main(){
    int n,element,ans=-1;
    cout<<"enter the size of array \n";
    cin>>n;
    int arr[n];
    cout<<"enter the array \n";
    for (int i = 0; i < n; i++)
        cin>>arr[i];
    cout<<"enter the elements to be searched ";
    cin>>element;
    for (int i = 0; i < n; i++){
            if (element==arr[i]){
                ans=i+1;
                break;
            }
        }
    cout<<"position is "<<ans;
    }