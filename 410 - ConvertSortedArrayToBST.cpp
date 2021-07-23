/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* newNode(int data){
        TreeNode* node = new TreeNode();
        node->val = data;
        node->left = NULL;
        node->right = NULL;
        
        return node;
    }
    TreeNode* convertToBST(vector<int>& nums,int start, int end){
        if(end<start){
            return NULL;
        }
        cout<<start<<end<<endl;
        int mid = (start + end)/2;
        TreeNode* root = newNode(nums[mid]);
        
        root->left = convertToBST(nums,start,mid-1);
        root->right = convertToBST(nums,mid+1,end);
        return root;
        
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return convertToBST(nums, 0,nums.size() -1);
        
    }
};
