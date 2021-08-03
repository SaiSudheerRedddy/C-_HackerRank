// Rotate an array of n for d number of times. 
// time complexity O(n) and space complexity O(1)

#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,d;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int temp;
        cin>>temp;
        arr[i] = temp;
    }
    cin>>d;
    for(int i=0;i<d/2;i++){
        swap(arr[i],arr[(d-1)-i]);
    }
    cout<<(n+d)/2<<endl;
    int j=0;
    for(int i = d;i<(n+d)/2;i++){
        swap(arr[i],arr[(n-1)-j]);
        j++;
    }
    for(int i=0;i<n/2;i++){
        swap(arr[i], arr[(n-1)-i]);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
