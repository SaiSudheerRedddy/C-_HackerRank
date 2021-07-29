#include<iostream>
#include<algorithm>
using namespace std;

long gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}


int findSteps(long x, long y,long step){
    if(gcd(x,y) > 1){
        return step;
    }
    if(gcd(x+1,y)>1 || gcd(x,y+1)>1){
        return 1;
    }else{
        return 2;
    }
}


int main(){
    int t;
    long x,y,step = 0;
    cin>>t;
    if(t>=1 && t<=100000){
        for(int i=0;i<t;i++){
            cin>>x>>y;
            int res = findSteps(x,y,step);
            cout<<res<<endl;
        }
    }
}
