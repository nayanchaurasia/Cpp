/*PRINT
   *
   *
 ***** 
   * 
   * 
   * 
   INPUT==NO OF LINES
*/
// FOR ODD INPUTS ONLY
#include<iostream>
using namespace std;
int main(){
    int num,n;
    cout<<"enter the number of lines(odd)";
    cin>>num;
    n=(num+1)/2;
    for (int i = 1; i <=num; i++)
    {
        for (int j = 1; j<=num; j++)
        {
            if ((i==n)||(j==n))
                cout<<"*";
            else
                cout<<" ";
            
        }
        cout<<endl;
    }
    
}