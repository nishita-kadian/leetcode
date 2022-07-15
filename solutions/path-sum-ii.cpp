//PATH SUM II -> 12/13/2021 10:49
//https://leetcode.com/problems/path-sum-ii/submissions/
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
    vector<vector<int>> ans;
    void dfs(TreeNode* root,int targetSum,int sum,vector<int> &path){
        if(root==NULL)
            return;
        if(root->left==NULL && root->right==NULL){
            sum += root->val;
            if(sum==targetSum){
                path.push_back(root->val);
                ans.push_back(path);
                path.pop_back();
                return;
            }
            return;
        }
        sum += root->val;
        path.push_back(root->val);
        dfs(root->left,targetSum,sum,path);
        dfs(root->right,targetSum,sum,path);
        path.pop_back();
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        int sum  =  0;
        vector<int> path;
        dfs(root,targetSum,sum,path);
        return ans;
    }
};
