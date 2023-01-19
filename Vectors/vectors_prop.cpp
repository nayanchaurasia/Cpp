#include<iostream>
#include<vector>
using namespace std;
int main(){
    // decalaring the vector without its size
    vector <int> v;
    // vector with size
    vector <float> flo(10);
    // to tell the size of the vector
    //cout<< v.size()<<endl;
    //cout<<flo.size()<<endl;
    // vector_name.capacity is used to check the capacity of the vector
    //cout<<v.capacity()<<endl;
   // cout<<flo.capacity()<<endl;
    // vector_name.push_back == is used to add element at the last
    v.push_back(542);
    //cout<< v.size()<<endl;
    //cout<<flo.size()<<endl;
    // for resize
    v.resize(5);
    //cout<<v.size()<<endl;
    //cout<<v.capacity()<<endl;
    //v.pop_back to delete the last element of the vector
    //v.pop_back();
    //cout<<v.size()<<endl;
    //v.pop_back();
    //cout<<v.size()<<endl;
    //input from user if size is not defined then u have to use push back option
    for (int i = 0; i < 5; i++)
    {
        int element;
        cin>>element;
        v.push_back(element);
    }
    // if the size of the vector is defined then we willm use it directly as we do in the array
    for (int i = 0; i < v.size(); i++)
    {
        cin>>v[i];
    }
    cout<<"hey\n";
    //to print the array of defined size
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<endl;
    }
    //printing element through the for each loop
    cout<< "hello";
    for (int ele: v)
        cout<<ele<<endl;
    // for inserting any element at any position
    // v.insert(position from start or from end, element)   
    v.insert(v.begin()+2,100);//the second element of v should be 100
    v.insert(v.end()-2,100);//at last second element [END-1==ADDRESS OF LAST ELEMENT]
    cout<<"2nd element "<<v[2];
    cout<<"last second element "<<v[v.size()-2];
    // to clear the vector v.clear()
    // to deletev the last element of the vector
    v.pop_back();
    //to erase the element of some particular[V.ERASE(POSITION)] position(POSITION SHOULD BE DEFINED EITHER FROM THE 
    //STARTING OR FROM THE END)
    v.erase(v.end()-5);
    v.erase(v.begin()+4); // IT SHOULD BE BEGIN()===otherwise error ..seee it
}