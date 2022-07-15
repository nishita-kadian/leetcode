//INSERT INTO A BINARY SEARCH TREE -> 01/12/2022 13:09
//https://leetcode.com/problems/insert-into-a-binary-search-tree/submissions/
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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL)
            return new TreeNode(val);
        if(root->left==NULL && val<root->val){
            root->left = new TreeNode(val);
            return root;
        }
        if(root->right==NULL && val>root->val){
            root->right = new TreeNode(val);
            return root;
        }
        if(val > root->val)
            insertIntoBST(root->right,val);
        else
            insertIntoBST(root->left,val);
         
        return root;
    }
};
