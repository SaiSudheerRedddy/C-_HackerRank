#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;


int find_c1(vector<int> arr, int c1, int c2,int k){
    int i;
    for(i = arr.size()-1;i>=2;i = i-2){
        c2 += arr[i];
        c1 += arr[i+1];
    }
    c2 += arr[1];
    c2+= arr[0];
    return c1;
}
int find_c2(vector<int> arr, int c1, int c2,int k){
    int i;
    for(i = arr.size()-1;i>=2;i = i-2){
        c2 += arr[i];
        c1 += arr[i+1];
    }
    c1 += arr[1];
    c1+= arr[0];
    return c1;
}

int main(){
    int t, n, k,r1 = 0,r2 = 0,temp;
    int c1,c2;
    cin>>t;
    for(int i=0;i<t;i++){
        c1 = 0;
        c2 = 0;
        cin>>n>>k;
        int k1 = k;
        vector<int> arr1,arr2;
        for(int j=0;j<n;j++){
            cin>>temp;
            arr1.push_back(temp);
            arr2.push_back(temp);
        }
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        r1 = find_c1(arr1,c1,c2,k);
        c1 = 0;
        c2 = 0;
        r2 = find_c2(arr2,c1,c2,k);
        if(r1>r2){
            cout<<r1<<endl;
        }else{
            cout<<r2<<endl;
        }
    }
}
