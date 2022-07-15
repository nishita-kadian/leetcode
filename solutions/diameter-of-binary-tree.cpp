//DIAMETER OF BINARY TREE -> 07/11/2022 23:09
//https://leetcode.com/problems/diameter-of-binary-tree/submissions/
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
    
    int maxHeight(TreeNode* root){
        if(root==NULL)
            return 0;
        int l = maxHeight(root->left);
        int r = maxHeight(root->right);
        return max(l,r)+1;
    }

    int ans  = 0;
   int diameterOfBinaryTree(TreeNode* root) {
        if(root == NULL)
            return 0;
        int li = 0;
        int ri = 0;        
        if(root->left!=NULL)
            li = maxHeight(root->left);
       if(root->right!=NULL)
            ri = maxHeight(root->right);
       ans = max(ans,li+ri);
        if(root->left!=NULL)
            diameterOfBinaryTree(root->left);
       if(root->right!=NULL)
            diameterOfBinaryTree(root->right);
       
       return ans;

    }
};
