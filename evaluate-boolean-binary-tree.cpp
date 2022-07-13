//EVALUATE BOOLEAN BINARY TREE -> 07/13/2022 14:39
//https://leetcode.com/problems/evaluate-boolean-binary-tree/submissions/
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
    bool evaluateTree(TreeNode* root) {
        if(root==NULL)
            return false;
        if(root->left == NULL && root->right == NULL){
            if(root->val == 0)
                return false;
            else
                return true;
        }
        else{
            if(root->val==2)
                return evaluateTree(root->left) || evaluateTree(root->right);
            else
                return evaluateTree(root->right) && evaluateTree(root->left);
        }
        
    }
};
