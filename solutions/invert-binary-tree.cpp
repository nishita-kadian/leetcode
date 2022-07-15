//INVERT BINARY TREE -> 04/29/2022 16:54
//https://leetcode.com/problems/invert-binary-tree/submissions/
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
    TreeNode* invert(TreeNode* &root){
        if(root==NULL)
            return NULL;
        if(root->left==NULL && root->right==NULL)
            return root;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        
        root->left = invert(right);
        root->right = invert(left);
        
        return root;
        
    }
    TreeNode* invertTree(TreeNode* root) {
        return invert(root);
        
    }
};
