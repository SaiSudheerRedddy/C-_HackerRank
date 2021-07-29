#include<iostream>
#include<vector>
using namespace std;


int main(){
    int t;
    int count_1 =0, count_0 =0;
    cin>>t;
    if(t>=1 && t<= 8){
        for(int i=0;i<t;i++){
            for(int i=0;i<3;i++){
                int temp;
                cin>>temp;
                if(temp == 1){
                    count_1 +=1;
                }else{
                    count_0 += 1;
                }
            }
            // cout<<count_0<<count_1<<endl;
            if(count_0 == 1 && count_1>=1){
                cout<<"1"<<endl;
            }else if(count_1 == 1 && count_0>=1){
                cout<<"1"<<endl;
            }else{
                cout<<"0"<<endl;
            }
            count_0 = 0;
            count_1 = 0;
        }

    }

}
