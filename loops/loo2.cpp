/*print
*
**
***
****
*****
*/
#include<iostream>
using namespace std;
int main(){
    int i,num,j;
    cout<<"enter th number of lines";
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for ( j = 1; j<=i; j++)
        {
           cout<<" * ";
        }
    cout<<endl;
    }
}
