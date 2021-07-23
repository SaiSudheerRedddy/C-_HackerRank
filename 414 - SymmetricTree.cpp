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
    bool solution = true;
    bool symmetric(TreeNode* p,TreeNode* q){
        if(p == NULL && q == NULL){
            return solution;
        }
        if(p != NULL){
            if(q != NULL){
                if(p->val == q->val){
                    symmetric(p->left,q->right);
                    symmetric(p->right, q->left);
                }else{
                    solution = false;
                }
            }else{
                solution = false;
            }
        }else{
                solution = false;
            }
        return solution;
    }
    
    
    bool isSymmetric(TreeNode* root) {
        if(root != NULL){
            solution = symmetric(root->left, root->right);
        }
        return solution;
    }
};
