//SYMMETRIC TREE -> 07/03/2022 16:28
//https://leetcode.com/problems/symmetric-tree/submissions/
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
    
    /** 
        2 ways to do this
          1. using vectors
          2. recursively (shorter than 1.) 
        
    **/
    bool sym(TreeNode* l, TreeNode* r){
        if(l == NULL && r == NULL)
            return true;
        if(l && r){
            if(l->val != r->val)
                return false;
        }
        else 
            return false;
        return (sym(l->left,r->right) && sym(l->right,r->left));
    }
    bool isSymmetric(TreeNode* root) {
        return sym(root->left,root->right);
    }
};
