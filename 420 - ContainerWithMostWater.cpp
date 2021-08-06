class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_capacity = 0,i,j;
        i=0,j=height.size()-1;
        while(i<=j){
            int mini = min(height[i],height[j]);
            int capacity = (j-i) * mini;
            if(capacity>max_capacity){
                max_capacity = capacity;
            }
            // cout<<mini<<" "<<i<<" "<<j<<endl;
            if(mini == height[i]){
                i++;
            }else{
                j--;
            }
            
        }
        return max_capacity;
    }
};
