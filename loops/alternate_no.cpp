/*PRINT
Since this is a rectangular pattern therfore it has two inputs
n and m or r or c i.e is row and column
121212
212121
121212
212121
*/
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"enter the number of rows";
    cin>>r;
    cout<<"enter the number of columns";
    cin>>c;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=c; j++)
        {
            // IMP CONCEPT OF SUM OF ROW AND COLUMN 
            if ((i+j)%2==0)
                cout<<"1 ";
            else
                cout<<"2 ";
        }
        cout<<endl;
    }
    
}