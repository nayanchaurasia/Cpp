/*PRINT
   1
  2 2
 3   3
4444444
*/
#include<iostream>
using namespace std;
int main(){
    int r,c,i;
    cout<<"enter the number of rows ";
    cin>>r;
    cout<<"enter the number of columns ";
    cin>>c;
    for (i = 1; i<=r; i++)
    {
        for (int j = 1; j<=c; j++)
        {
            if ((i+j==5)||(j-i==3)||i==r)
                cout<<i;
            else
                cout<<" ";
            
        }
        cout<<endl;
    }
    
}