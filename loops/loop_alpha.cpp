/*print
AAAAA
BBBB
CCC
DD
E
*/
#include<iostream>
using namespace std;
int main(){
    int i,num,j,alpha;
    cout<<"enter th number of lines";
    cin>>num;
    alpha=65;
    for(i=1;i<=num;i++)
    {
        for ( j = num; j>=i; j--)
        {
           cout<< char(alpha);
        }
        alpha+=1;
        cout<<endl;
    }
}
