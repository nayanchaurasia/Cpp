/*PRINT==
1234567
2345671
3456712
4567123
5671234
6712345
7123456
*/
#include<iostream>
using namespace std;
int main(){
    int num,c;
    cout<<"enter the number of rows\n";
    cin>>num;
    for (int  i = 1; i <=num; i++)
    {
        c=i;
        for (int j = 1; j <= num; j++)
        {
            cout<<c;
            c++;
            if(c==num+1)
                c=1;     
        }
        cout<<endl;
    }
    
}
// second concept is that for inner loop use two loop one for 1-7 (from 1 to i)and
// another of the another 1-7(from 1 to i-1)..i-1 because observe the pattern
