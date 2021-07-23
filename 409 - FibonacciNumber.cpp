class Solution {
public:
    int res = 0;  
    int fib_find(int n,int* memo) {
        cout<<n<<memo[n]<<endl;
        if(memo[n] == -1){
            if(n == 0 || n==1){
                res = n;
            }else{
                res = fib_find(n-1,memo) + fib_find(n-2,memo); 
            }
            memo[n] = res;
        }else{
            res = memo[n];
        }
        return res;    
    }
    int fib(int n){
        int memo[n+1];
        memset(memo, -1, sizeof(memo));
        res =  fib_find(n,memo);
        return res;
    }
};
