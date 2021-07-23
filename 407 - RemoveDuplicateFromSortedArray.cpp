class Solution {
public:
    vector<int> swap(vector<int>& nums, int p1, int p2){
        int temp;
        temp = nums[p1];
        nums[p1] = nums[p2];
        nums[p2] = temp;
        return nums;
    }
    int removeDuplicates(vector<int>& nums) {
        int start = 0;
        int count = 0;
        if(nums.size() == 0){
            return 0;
        }
        int curr = nums[0];
        for(int i =1;i<nums.size();i++){
            if(nums[i] > curr){
                cout<<nums[i]<<" ";
                curr = nums[i];
                nums = swap(nums,start+1,i);
                start ++;
                count ++;
                // i++;
            }
        }
        return count+1;
    }
};
