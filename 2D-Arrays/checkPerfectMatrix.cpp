/*
INPUT  : square matrix 
Output: return true is it is perfect matrix or else false

perfect matrix:
1 0 0 0
0 2 0 0
0 0 8 0
0 0 0 6
*/
#include<iostream>
#include<vector>
using namespace std;

// taking input and then storing row wise prefix sum matrix
void inputArray(vector<vector<int>> &v,int r){
    for (int i = 0; i < r; i++)
    {   vector<int> vec;
        for (int j = 0; j < r; j++)
        {
            int val;
            cin>>val;
            vec.push_back(val);
        }
        v.push_back(vec);
    }
}

// returning thetrue or false
bool checkPerfect(vector<vector<int>> &v){
    for (int i = 0 ; i <v.size(); i++){
        for (int j = 0; j <v.size() ; j++)
        {  
            if (i==j){
                if(v[i][j]==0)
                    return false;
            }else
            {   if (v[i][j]!=0)
                    return false;
            }
            
            /*just one for loop and its done
             or v[i][i]==o : return false
            else if v[i][n-i-1]!=0 :return false
            */
        }
    }
return true;
}

int main(){
vector<vector<int>> vec;
int row;
cout<<"enter the size of the square matrix : ";
cin>>row;

cout<<"enter the square array : ";
inputArray(vec,row);

cout<<"the output is: "<< checkPerfect(vec);

return 0;
}
