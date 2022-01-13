//MINIMUM ABSOLUTE DIFFERENCE IN BST -> 01/13/2022 00:14
//https://leetcode.com/problems/minimum-absolute-difference-in-bst/submissions/
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
    vector<int> inorder(TreeNode* root,vector<int>& v){
        if(root==NULL)
            return v;
        inorder(root->left,v);
        v.push_back(root->val);
        inorder(root->right,v);
        
        return v;
    }
    int getMinimumDifference(TreeNode* root) {
        vector<int> v;
        inorder(root,v);
        int mini = INT_MAX;
        for(int i = 0 ; i < v.size()-1 ; i++){
            mini = min(v[i+1]-v[i],mini);
        }
        return mini;
    }
};
