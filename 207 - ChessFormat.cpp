#include<iostream>
using namespace std;


void chessFormat(int a, int b){
    if((a+b)<3){
        cout<<"1"<<endl;
    }else if((a+b) >=3 && (a+b)<=10){
        cout<<"2"<<endl;
    }else if((a+b)>=11 && (a+b)<=60){
        cout<<"3"<<endl;
    }else if((a+b)>60){
        cout<<"4"<<endl;
    }
}

int main(){
    int t, a, b;
    cin>>t;
    if(t>=1 && t<=1100){
        for(int i=0;i<t;i++){
            cin>>a>>b;
            chessFormat(a,b);
        }
    }
    return 0;
}
