/*PRINT
   1
  121
 12321
1234321
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number of lines";
    cin>>n;
    for (int i = 0; i <=n; i++)
    {   // for space
        for (int j = 1; j <=n-i; j++)
            cout<<" ";
        //for increasing values
        for (int k = 1; k <=i; k++)
            cout<<k;
        // for decreasing values
        for (int l = i-1; l >=1; l--)
            cout<<l;
        cout<<endl; 
    }
    
}
