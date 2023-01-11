#include <iostream>
using namespace std;
void vote_ch(int age){
    if (age<18)
        cout<<"u cannot vote\n";
    else 
        cout<<"u can vote\n";
    
}
int main(){
    int ag;
    cout<<"enter the age";
    cin>>ag;
    vote_ch(ag);
}