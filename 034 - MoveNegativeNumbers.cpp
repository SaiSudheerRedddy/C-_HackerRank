// Move all negative numbers to beginning and positive to end with constant extra space

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

    int pointer = 0,flag = 0;
    for(int i=0;i<n;i++){
        if(arr[i]<0){
            if(flag == 1){
                swap(arr[i],arr[pointer]);
                flag = 0;
                i--;
            }
            continue;
        }else{
            pointer = i;
            flag = 1;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;
    return 0;
}

// Moved all the negative elements to the beginning of the array with O(n) time complexity 
// O(1) space complexity 
