/*PRINT 
      2
     3 5
    7 11 13
  17 19 23 29  
 31 37 41 43 47 
53 59 61 67 71 73 
INPUT=number of lines
*/
#include<iostream>
using namespace std;
int main(){
    int n,num=2,c;
    cout<<"enter the number of lines ";
    cin>>n;
    for (int i = 1; i <=n; i++)
    {
        // for pyramid
        for (int j = 1; j<=n-i; j++)
            cout<<" ";
        for (int k = 1; k<=i; k++)
        {   
            // for printing the prime number
            for (int n=1; n=1; n++)
            {   c=0;
                for (int l = 2; l <num-1; l++)
                {   
                     if(num%l==0)
                         c++;
                }
                if (c==0)
                {
                    cout<<num++<<" ";
                    break;
                }
                num++;
            }
        }
        
        cout<<endl;
        
    }
    
}