#include<iostream>
#include <array>
#include<vector>
using namespace std;
int main (){
    array<int,5> arr;
    vector<int> vec={1,5,6,9,8,7};
    // no push_back for stl array
    vec.push_back(50);
    vec.push_back(60);
    // for array size();
    cout<<endl<<vec.size();
    cout<<endl<<arr.size();
    //for printing individual array  indexing based:
    cout<<endl<<arr[2];
    cout<<endl<<vec[2];
    cout<<endl<<arr.at(1);//.at() is a method;
    cout<<endl<<vec.at(1);
    //address based: work==vec.begin() and vec.end()
    // USED TO FINED THE FIRST AND LAST ELEMENT
    cout<<endl<<"first ekement: "<<vec.front();
    cout<<endl<<"last elements: "<<vec.back();
    cout<<endl<<"first ekement: "<<arr.front();
    cout<<endl<<"last elements: "<<arr.back();
    //for address we use begin and end
    cout<<endl<<"address of first ele :"<<arr.begin();
    cout<<endl<<"address of first ele :"<<arr.end();
    //
    
}
