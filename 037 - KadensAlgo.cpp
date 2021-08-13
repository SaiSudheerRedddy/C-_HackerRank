#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = INT_MIN,curr_max = 0;
    for(int i=0;i<n;i++){
        curr_max = curr_max + arr[i];
        if(curr_max > max){
            max = curr_max;
        }
        if(curr_max<0){
            curr_max = 0;
        }
    }
    cout<<max<<endl;
    return max;
}
