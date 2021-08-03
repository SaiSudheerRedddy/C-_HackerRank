// Find the unique elements in the given array 
// Time complexity is O(n) and space complexity is O(n). 


#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,curr;
    cin>>n;
    int arr[n];
    vector<int> res;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    curr = arr[0];
    res.push_back(curr);
    for(int i=0;i<n;i++){
        if(arr[i] != curr){
            res.push_back(arr[i]);
            curr = arr[i];
        }
    }
    for(int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    cout<<endl;
    return 0;

}
