class Solution {
public:
    int trap(vector<int>& height) {
        if(height.size() == 0){
            return 0;
        }
        int lmax[height.size()+1], rmax[height.size()+1],flag = 0;
        int res = 0;
        lmax[0] = height[0];
        for(int i = 1;i<height.size();i++){
            lmax[i] = std::max(height[i],lmax[i-1]);
            cout<<lmax[i]<<" ";
        }cout<<endl;
        rmax[height.size()-1] = height[height.size()-1];
        for(int i = height.size()-2;i>=0;i--){
            rmax[i] = std::max(height[i],rmax[i + 1]);
            cout<<rmax[i]<<" ";
        }
        for(int i=1;i<height.size()-1;i++){
            int minimum = std::min(lmax[i],rmax[i]);
            res += minimum - height[i];
        }
        return res;  
        
    }
};
