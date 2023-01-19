/*
INPUT =X(ANY ELEMENT) FINDS ITS LASTV OCCURENCE IN THE VECTOR
LAST OCCURENCE OF THE ELEMENT X
*/
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    // occurence ==-1 because if the element is not found then then occurence shown will be 0
    int occurence=-1,size,element;
    cout<<"Enter the size of the vector \n";
    cin>>size;
    cout<<"Enter the vectors values "<<endl;

    for (int i = 0; i < size; i++)
    {
        int ele;
        cin>>ele;
        v.push_back(ele);
    }

    cout<<"enter the element whose last occurence u have to find out \n";
    cin>>element;
    /*
    this for loop is starting from the initial point i.e from the 0 to last 
    we can also traverse the loop from the last and the first occcurence of for loop will give
     us the last occurence of that element \
     i.e for (int i=v.size()-1;i>=0;i--)
            if v[i]==element
                occurence=i+1;
                break;
    */    for (int i = 0; i < size; i++)
    {
        if (element == v[i])
            occurence=i;  
    }
    cout<<"the occurence of the last element of the vector is "<<occurence+1;  
}