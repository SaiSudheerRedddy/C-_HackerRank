#include<iostream>
#include<string>
#include<cmath>
using namespace std;
int counter(int l,string s){
    int count = 0;
    for(int i=0;i<l;i++){
        if(s[i]=='1'){
            count = count + 1;
        }
    }
    return count;
}
int find(int l,string s){
    int count =0;
    count = counter(l,s);
    if(count>=round(l/2.0)){
        cout<<"YES"<<endl;
    }else{
        int temp = 0;
        for(int i = l;i>=1;i--){
            if(count>=round(i/2.0)){
                cout<<"YES"<<endl;
                temp = 1;
                return 0;
            }
            if(s[i-1]=='1'){
                count = count -1;
            }
        }
        if(temp == 0){
            cout<<"NO"<<endl;
        }
    }
    return 0;
}

int main(){
    int t,l;
    string s;
    cin>>t;
    for(int j = 0;j<t;j++){
        cin>>l;
        cin>>s;
        if(s.length()==l){
            find(l,s);

        }
    }
}
