class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int profit = 0,min_index;
        int min = INT_MAX,max = 0;
        for(int i=0;i<arr.size();i++){
            if(arr[i] < min){
                min = arr[i];
            }else if(arr[i] - min > profit){
                profit = arr[i] - min;
            }
        }
        return profit;
    }
};
