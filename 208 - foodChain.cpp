#include<iostream>
using namespace std;


void findLength(long e, long k){
    int count = 1;
    while((e/k)!=0){
        count ++;
        e = e/k;
    }
    cout<<count<<endl;
}


int main(){
    int t;
    long e,k;
    cin>>t;
    if(t>=1 && t<=10000){
        for(int i=0;i<t;i++){
            cin>>e>>k;
            if(e>=1 && e<=1000000000 && k>=2 && k<=1000000000){
                findLength(e,k);
            }
        }
    }
    return 0;
}
