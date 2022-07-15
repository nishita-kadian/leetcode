//BALANCED BINARY TREE -> 04/30/2022 17:44
//https://leetcode.com/problems/balanced-binary-tree/submissions/
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
    int maxDepth(TreeNode* root){
        if(root==NULL)
            return 0;
        return 1 + max(maxDepth(root->left),maxDepth(root->right));
    }
    vector<int> dia(TreeNode* root,vector<int> &v){
        if(root==NULL)
            return v;
        int x = (maxDepth(root->left));
        int y =(maxDepth(root->right));
        v.push_back(abs(x-y));
        dia(root->left,v);
        dia(root->right,v);
        return v; 
    }
    bool isBalanced(TreeNode* root) {
        vector<int> v;
        dia(root,v);
        for(int i =0;i<v.size();i++){
            if(v[i]>1)
                return false;
        }
        return true;    
    }
};
