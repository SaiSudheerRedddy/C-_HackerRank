class Solution {
public:
    int missingNumber(vector<int>& nums) {
        vector<int> numCount;
        for(int i=0;i<nums.size();i++){
            int x = count(nums.begin(),nums.end(),i);
            numCount.push_back(x);
        }
        vector<int>::iterator k2 = find(numCount.begin(),numCount.end(),0);
        int index2 = distance(numCount.begin(),k2);
        return(index2);
    }
};
