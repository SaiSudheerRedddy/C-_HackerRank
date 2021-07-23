class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int min = INT_MAX, max = 0, profit = 0, flag = 0;
        for(int i =1;i<arr.size();i++){
            if(arr[i] >arr[i-1]){
                profit += arr[i] - arr[i-1];
            }
        }
        return profit;
    }
};
