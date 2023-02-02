/*
 Write a function that returns the first character, last character and the number of 
occurrences of ‘t’ in a string input by user.
Input: twitter
Output: t r 3
*/
#include<iostream>
using namespace std;

void pointer(string str,char *first_char,char *last_char,int* count){
    *first_char=str[0];
    *last_char=str[str.size()-1];
    for (int i = 0; i < str.size()-1; i++)
    {  
        if(str[i]=='t')
            (*count)++;
    }
}

int main(){
    string s="twitter";
    char first,last;
    int occurenceOft=0;
    pointer(s,&first,&last,&occurenceOft);
    cout<<"the first character and last character is "<<first<<" "<<last<<endl;
    cout<<"the occurence of t is "<< occurenceOft;
    return 0;
}