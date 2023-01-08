/*print
ABCDE
FGHI
JKL
MN
O
*/
#include<iostream>
using namespace std;
int main(){
    int i,num,j;
    cout<<"enter th number of lines";
    cin>>num;
    int alpha=65;
    for(i=1;i<=num;i++)
    {
        for ( j = 1; j<=i; j++) 
        {
            if (alpha==91)
            {
                alpha=97;
            }
            cout<<" "<<char(alpha);
            alpha+=1;              
        }
    cout<<endl;
    }
}  