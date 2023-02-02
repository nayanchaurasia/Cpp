#include<iostream>
using namespace std;

int pwr(int n,int k){
    if (k==0) return 1;
    return pwr(n,--k) * n;
}

int arm(int n,int *k){
    if(n<10){
        (*k)+=1;
        return  pwr(n,*k);
    }
    (*k)+=1;
    int sum=arm(n/10,k)+pwr((n%10),*k);
    return sum;
}

int main(){
    int num,sum;
    int power=0;
    cout<<"enter the number: ";
    cin>>num; 
    sum=arm(num,&power);
    //cout<<sum<<"pow"<<power<<" ";
    if (sum==num)
    cout<<" ARMSTRONG NUMBER ";
    else
    cout<<"NOT ARMSTRONG";
}
