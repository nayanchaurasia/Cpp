/*  A
   ABC
  ABCDE
 ABCDEFG
ABCDEFGHI
 ABCDEFG
  ABCDE
   ABC
    A
    */
// INPUT WILL be only half lines i.e 5
#include<iostream>
using namespace std;
int main(){
    int c,n;
    cout<<"enter the number ";
    cin>>n;
    // for upper 5 lines
    for (int i =1; i <=n; i++)
    {   c=65;
        for (int j =n-i; j >=1; j--)
            cout<<" ";
        for (int k = 1; k <=2*i-1; k++)
        {
            cout<<char(c);
            c++;
        }    
        cout<<endl;
    }
    // for bottom 4 lines
     for (int i =1; i <=n-1; i++)
    {   c=65;
        for (int j = 1; j<=i; j++)
            cout<<" ";
        for (int k =1; k <=2*(n-i)-1; k++)
        {
            cout<<char(c);
            c++;
        }    
        cout<<endl;
    }
    
    return 0;
}