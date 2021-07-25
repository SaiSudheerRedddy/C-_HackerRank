// Program to check if kth bit is set or no.

#include<iostream>
using namespace std;


void check_bit(int n, int k){
    if((n & (1 << (k-1))) != 0){
        cout<<"Yes"<<endl;
    }else{
        cout<<"No"<<endl;
    }
}


int main(){
    int n,k;
    cin>>n>>k;
    check_bit(n,k);
    return 0;
}
