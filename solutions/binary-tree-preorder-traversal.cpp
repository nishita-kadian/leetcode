//BINARY TREE PREORDER TRAVERSAL -> 11/19/2021 17:22
//https://leetcode.com/problems/binary-tree-preorder-traversal/submissions/
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
     vector<int> ans;
     vector<int> preorderTraversal(TreeNode* root) {
        if(root==NULL)
            return ans;
        
        ans.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
        
        return ans;
    }
};

