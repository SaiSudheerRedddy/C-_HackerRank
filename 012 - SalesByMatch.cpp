int sockMerchant(int n, vector<int> ar) {
    int dp[n];
    int crr = 0;
    int pair = 0;
    int count = 0;
    if(n>=1 && n<=100){
        std::sort(ar.begin(),ar.end());
        crr = ar[0];
        count = 0;
        for(int i=0;i<ar.size();i++){
            if(ar[i] != crr){
                cout<<crr<<" "<<ar[i]<<" "<<count<<endl;
                crr = ar[i];
                pair += count/2;
                count = 0;
                count ++;
            }else{
                count ++;
            }
            // cout<<ar[i]<<" "<<crr<<endl;
        }
    }
    pair += count/2;
    return pair;

}
