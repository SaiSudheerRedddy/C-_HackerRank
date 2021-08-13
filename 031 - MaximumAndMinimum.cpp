// Find the minimum and maximum of an array in least number of comparisions
// or least time complexity 

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

    sort(arr,arr+n);
    cout<<arr[0]<<" "<<arr[n-1]<<endl;
    return 0;
}
