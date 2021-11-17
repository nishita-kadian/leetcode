//UNIVALUED BINARY TREE -> 11/17/2021 12:44
//https://leetcode.com/problems/univalued-binary-tree/submissions/
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
    int x;
    bool ans(TreeNode* root)
    {
        if(root==NULL)
            return true;
        if(root->val!=x)
            return false;
        bool l = ans(root->left);
        bool r = ans(root->right);
        return l&r;
    }
    
    bool isUnivalTree(TreeNode* root) {
         x = root->val;
        return ans(root);
//         if(root->left!=NULL && root->val!=(root->left)->val)
//             return false;
//         if(root->right!=NULL && root->val!=(root->right)->val)
//             return false;
//         if(root->left==NULL && root->right==NULL)
//             return true;
//         if(root==NULL)
//             return true;
//         return isUnivalTree(root->left);
//         return isUnivalTree(root->right);
        
        
        
    }
};
