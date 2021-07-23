#include<stack>
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
    stack<int> memory;
    int currentSum = 0;
    bool result = false;
    bool hasPathSum(TreeNode* root, int targetSum) {
        
        if(root != NULL){
            memory.push(currentSum);
            currentSum += root->val;
            if(root->left == NULL && root->right == NULL){
                if(currentSum == targetSum){
                    
                    result = true;
                }else{
                    cout<<currentSum<<endl;
                    currentSum = memory.top();
                    memory.pop();
                    cout<<currentSum<<endl;
                }
            }else{
                result = hasPathSum(root->left, targetSum);
                result = hasPathSum(root->right, targetSum);
                currentSum = memory.top();
                memory.pop();
            }
        }
        return result;
        
    }
};
