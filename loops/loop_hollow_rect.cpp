/*
PRINT
123456
1    6
1    6
1    6
123456
for any number of rows*/
#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<< "enter the number of rows\n";
    cin>>r;
    cout<< "enter the number of coloumns\n";
    cin>>c;
    for (int i = 1; i <=r; i++)
    {
        for (int j = 1; j <=c; j++)
        {
            if(i==1||i==r||j==1||j==c)
                cout<<j;
            else
                cout<<" ";
        }
        cout<<endl;
    }
    
return 0;
}