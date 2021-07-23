class Solution {
public:
    int climbStairs(int n) {
        n++;
        if(n<1 || n>46 ){
            return 0;
        }
        int arr[n+1];
        arr[0] = 0;
        arr[1] = 1;
        for(int i= 2;i<=n;i++){
            arr[i] = arr[i-1] + arr[i-2];
        }
        for(int i =0;i<=n;i++){cout<<arr[i]<<" ";}
        return arr[n];
    }
};
