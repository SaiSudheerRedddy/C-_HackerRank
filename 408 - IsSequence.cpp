class Solution {
public:
    bool isSubsequence(string s, string t) {
        int arr[t.length()+1][s.length()+1];
        int n = t.length();
        int m = s.length();
        
        for(int i=0;i<n;i++){
            arr[i][0] = 0;
        }
        for(int j=0;j<m;j++){
            arr[0][j] = 0;
        }
        
        for(int i=1;i<=n;i++){
            for(int j =1;j<=m;j++){
                if(t[i-1] == s[j-1]){
                    arr[i][j] = 1 + arr[i-1][j-1];
                }else{
                    arr[i][j] = arr[i-1][j];
                } 
            }
        }
        for(int i =0;i<=n;i++){
            for(int j=0;j<=m;j++){
                cout<<arr[i][j]<<" ";
            }
            cout<<endl;
        }
        cout<<arr[n][m]<<endl;
        if(arr[n][m] == s.length()){
            return true;
        }else{
            return false;
        }
    }
};
