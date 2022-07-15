//FLATTEN BINARY TREE TO LINKED LIST -> 12/21/2021 10:18
//https://leetcode.com/problems/flatten-binary-tree-to-linked-list/submissions/
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
    void preorder(TreeNode* root,queue<TreeNode*>& q){
        if(root==NULL)
            return;
        q.push(root);
        preorder(root->left,q);
        preorder(root->right,q);
        return;
    }
    void flatten(TreeNode* root) {
        if(root == NULL)
            return;
        queue<TreeNode*> q;
        preorder(root,q);
        root->left=NULL;
        root->right = NULL;
        q.pop();
        while(!q.empty()){
            root->right = q.front();
            root->left = NULL;
            q.pop();
            root = root->right;
        }
        return;
    }
};
