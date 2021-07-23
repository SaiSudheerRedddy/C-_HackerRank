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
    int depth = 0;
    int maxDepth(TreeNode* root) {
        if(root == NULL){
            return 0;
        }
        
        if(root->left == NULL && root->right == NULL){
            return 1;
        }else{
            int l = maxDepth(root->left);
            int r = maxDepth(root->right);
            if(l>r){
                return (1 + l);
            }else{
                return (1 + r);
            }
        }
    }
};
