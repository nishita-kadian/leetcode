//FIND MODE IN BINARY SEARCH TREE -> 05/06/2022 10:42
//https://leetcode.com/problems/find-mode-in-binary-search-tree/submissions/
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
    int max_occurence = 0;
    int count =0;
    int previous  = INT_MIN;
    void inorder(TreeNode* root){
        if(root==NULL)
            return;
        inorder(root->left);
        if(previous== root->val)
            count++;
        else
            count = 1;
        if(count>max_occurence){
            ans.clear();
            max_occurence = count;
            ans.push_back(root->val);
        }
        else if(count==max_occurence){
            ans.push_back(root->val);
        }
        previous = root->val;
        inorder(root->right);
    }
    vector<int> findMode(TreeNode* root) {
        inorder(root);
        return ans;  
    }
};
