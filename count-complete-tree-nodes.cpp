//COUNT COMPLETE TREE NODES -> 04/21/2022 18:52
//https://leetcode.com/problems/count-complete-tree-nodes/submissions/
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
   void preorder(TreeNode* root,queue<int> &q){
        if(root==NULL)
            return;
       q.push(root->val);
       preorder(root->left,q);
       preorder(root->right,q);
       
    }
    int countNodes(TreeNode* root) {
       if(root==NULL)
           return 0;
        queue<int> q;
        preorder(root,q);
        int count=0;
        while(!q.empty()){
            count++;
            q.pop();
        }
        return count;
    }
};
