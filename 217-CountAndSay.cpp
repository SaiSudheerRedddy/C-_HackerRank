// Link: https://leetcode.com/problems/count-and-say/


class Solution {
public:
    string countAndSay(int n) {
        string cS = "1";
        if(n == 1){
            return "1";
        }
        string res;
        for(int i=1;i<n;i++){
            int j=1;
            int count = 1;
            res = "";
            while(j<=cS.length()){
                if(cS[j] != cS[j-1]){
                    res += to_string(count);
                    count = 1;
                    res += (cS[j-1]);
                    
                }else{
                    count++;
                }
                j++;
            }
            cS = res;
            if(i == n-1){
                return res;
            }
        } 
        return res;
    }
};
