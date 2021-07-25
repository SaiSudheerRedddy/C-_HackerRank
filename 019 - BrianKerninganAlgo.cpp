// Program to count number of bits that are set.

#include<iostream>
using namespace std;


void count_bit_naive(int n){
    int count = 0;
    while(n != 0){
        if((n&1) == 1){
            count ++;
        }
        n = n>>1;
    }
    cout<<"No of set bits are = "<< count<<endl;
}
// Time complexity of naive solution is BigO(total n bits)

void brianKerninganAlgo(int n){
    int count = 0;
    while(n != 0){
        n = n & (n-1);
        count ++;
    }
    cout<<"No of set bits using brian Keringan Algo = "<< count<<endl;
}

void lookuptablemethod(int n){
    int table[257];
    table[0] = 0;
    for(int i=1;i<256;i++){
        table[i] = (i&1) + table[i/2];
    }
    int res = table[n & 0xff];
    n = n>>8;
    res += table[n & 0xff];
    n = n>>8;
    res += table[n & 0xff];
    n = n>>8;
    res += table[n & 0xff];
    cout<<"No. of set bits using look up table = "<<res<<endl;
}


int main(){
    int n;
    cin>>n;
    count_bit_naive(n);
    brianKerninganAlgo(n);
    lookuptablemethod(n);
    return 0;
}
