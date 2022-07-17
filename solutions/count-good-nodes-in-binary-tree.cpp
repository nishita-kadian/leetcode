// Count Good Nodes In Binary Tree -> 07/16/2022 00:29
//https://leetcode.com/problems/count-good-nodes-in-binary-tree/submissions/
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
    vector<int> v;
    int ans = 0;
    void countNodes(TreeNode* root, vector<int> v){
        if(root==NULL)
            return ;
        v.push_back(root->val);
        if(*max_element(v.begin(),v.end()) == root->val)
            ans++ ;

        countNodes(root->left,v);
        countNodes(root->right,v);
        return;

    }
    int goodNodes(TreeNode* root) {
        countNodes(root,v);
        return ans;
    }
};
