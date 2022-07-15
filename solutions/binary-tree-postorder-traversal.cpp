//BINARY TREE POSTORDER TRAVERSAL -> 11/19/2021 17:24
//https://leetcode.com/problems/binary-tree-postorder-traversal/submissions/
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
    vector<int> op;
    vector<int> postorderTraversal(TreeNode* root) {
        if(root==NULL)
            return op;
         
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        op.push_back(root->val);
        return op;
    }
};
