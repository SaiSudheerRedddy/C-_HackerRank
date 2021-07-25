// Program to count number of bits that are set.
// Naive Approach

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




int main(){
    int n;
    cin>>n;
    count_bit_naive(n);
    return 0;
}
