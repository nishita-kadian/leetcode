//MINIMUM DEPTH OF BINARY TREE -> 05/01/2022 11:14
//https://leetcode.com/problems/minimum-depth-of-binary-tree/submissions/
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
    int minDepth(TreeNode* root) {
        if(root==NULL)
            return 0;
        
        int l = minDepth(root->left);
        int r = minDepth(root->right);
        if((root->left==NULL && root->right!=NULL)||(root->left!=NULL && root->right==NULL))
            return 1 + max(l,r);
        else
            return 1 + min(l,r);
        
    }
};
