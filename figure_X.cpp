/*PRINT
*   *
 * *
  *
 * *
*   *  
*/
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number " ;
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <=n; j++)
        {
            if ((i==j)||(i+j==n+1))
                cout<<"*";
            else
                cout<<" ";
            
        }
        cout<<endl;
    }
    //ENTER 5 OR 6

}