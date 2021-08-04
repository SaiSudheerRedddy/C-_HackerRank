// Given an array(0-based indexing), you have to find the max sum of i*A[i] where A[i] is the element at index i in the array. 
// The only operation allowed is to rotate(clock-wise or counter clock-wise) the array any number of times.
// Time Complexity - O(n);
// Space Complexity - O(1);

#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n,sum=0,max = 0,d,j=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
            d = i;
        }
    }

    for(int i=0;i<(d)/2;i++){
        swap(arr[i],arr[d - i]);
    }
    for(int i=d+1;i<(d + (n-1)/2);i++){
        swap(arr[i],arr[(n-1) - j]);
        j++;
    }
    for(int i=0;i<(n-1)/2;i++){
        swap(arr[i],arr[(n-1)-i]);
    }

    for(int i=0;i<n;i++){
        sum += (arr[i] * i);
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    cout<<sum<<endl;
    return 0;
}
