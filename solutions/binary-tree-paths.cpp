//BINARY TREE PATHS -> 05/01/2022 14:54
//https://leetcode.com/problems/binary-tree-paths/submissions/
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
    void path(TreeNode* root,string s,vector<string> &v){
        if(root==NULL)
            return ;
        s+=to_string(root->val)+"->";
        if(root->left==NULL && root->right==NULL){
            s.pop_back();
            s.pop_back();
            v.push_back(s);
        }
        path(root->left,s,v);
        path(root->right,s,v);
        return ;
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> v;
        string x="";
        path(root,x,v);
        return v;
    }
};

