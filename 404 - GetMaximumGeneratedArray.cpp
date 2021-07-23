class Solution {
public:
    int getMaximumGenerated(int n) {
        if(n == 0){
            return 0;
        }else if(n==1){
            return 1;
        }
        int arr[n+1];
        arr[0] = 0;
        arr[1] = 1;
        int i=1;
        int max = 1;
        while(2*i <= n && 2*i >=2){
            arr[2*i] = arr[i];
            if(2*i+1 >=2 && 2*i+1 <=n){
                arr[2*i+1] = arr[i] + arr[i+1];
            }
            i++;
        }
        for(int i =0;i<=n;i++){
            cout<<arr[i]<<" ";
            if(arr[i]>max){
                max = arr[i];
            }
        }
        return max;
    }
};
