


/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize){
    int* returnArr;
    returnArr = (int*)malloc((2) * sizeof(int));
    for(int i =0;i<numsSize ; i++){
        for(int j=0;j<numsSize;j++){
            if(i != j){
                if(nums[i] + nums[j] == target){
                    returnArr[0] = i;
                    returnArr[1] = j;
                }
            }
        }
    }
    return returnArr;

}
