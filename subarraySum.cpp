// Find the sum between two index with bigO(1) when n queries are given.

#include<iostream>
#include<vector>
using namespace std;
int n;

int findsum(vector<vector<int> >& dp,int start, int end){

    return dp[start][end];
}


int main(){
    int temp;
    vector<int> arr;
    for(int i=0;i<3;i++){
        cin>>temp;
        arr.push_back(temp);
    }


    
    n = arr.size()+1;
    vector<vector<int> > dp;
    for(int i = 0;i<=arr.size();i++){
        vector<int>dp_sub;
        for(int j=0;j<=arr.size();j++){
            dp_sub.push_back(0);
        }
        dp.push_back(dp_sub);
    }
    for(int i=1;i<=arr.size();i++){
        for(int j=i;j<=arr.size();j++){
            dp[i][j] = dp[i][j-1] + arr[j-1];
        }
    }
    cout<<"Generated dp = "<<endl;
    for(int i=0;i<=arr.size();i++){
        for(int j=0;j<=arr.size();j++){
            cout<<dp[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;

    cout<<"Enter the queries = "<<endl;
    int queries;
    cin>>queries;
    for(int i=0;i<queries;i++){
        int start;
        int end;
        cin>>start>>end;
        cout<<findsum(dp,start,end)<<endl;
    }
}