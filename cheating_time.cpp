#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t,n,k,f,s,e = 0;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n>>k>>f;
        int time = 0;
        for(int j = 0;j<n;j++){
            cin>>s>>e;
            time = time + (e - s);
        }
        if((f - time) >= k){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;

    }
}