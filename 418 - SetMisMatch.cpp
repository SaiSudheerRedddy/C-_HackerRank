#include<algorithm>
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> result;
        vector<int> numCount;
        for(int i=1;i<n;i++){
            int x = count(nums.begin(),nums.end(),i);
            numCount.push_back(x);
        }
        vector<int>::iterator k1 = find(numCount.begin(),numCount.end(),2);
        int index1 = distance(numCount.begin(),k1);
        vector<int>::iterator k2 = find(numCount.begin(),numCount.end(),0);
        int index2 = distance(numCount.begin(),k2);
        result.push_back(index1+1);
        result.push_back(index2+1);
        return result;
        }
};
