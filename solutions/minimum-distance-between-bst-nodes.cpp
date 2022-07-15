//MINIMUM DISTANCE BETWEEN BST NODES -> 11/28/2021 13:15
//https://leetcode.com/problems/minimum-distance-between-bst-nodes/submissions/
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
    vector<TreeNode*> inorder(TreeNode* root,vector<TreeNode*>&v)
    {
        if(root==NULL)
            return v;
        inorder(root->left,v);
        v.push_back(root);
        inorder(root->right,v);
        
        return v;
    }
    int minDiffInBST(TreeNode* root) {
        vector<TreeNode*> v;
        vector<TreeNode*> ans = inorder(root,v);
        // for(int i = 0 ; i<ans.size();i++)
        // {
        //     cout<<(ans[i])->val<<endl;
        // }
        int m =INT_MAX;
        for(int i = 0 ; i < ans.size()-1 ; i++)
        {
            m = min(m,ans[i+1]->val - ans[i]->val);
            // cout<<m<<endl;
        }
        return m;
        
    }
};
