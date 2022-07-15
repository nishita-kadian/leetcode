//PATH SUM -> 05/01/2022 13:56
//https://leetcode.com/problems/path-sum/submissions/
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
    int sum=0;
    bool PathSum(TreeNode* root,int sum, int targetSum) {
        if(root==NULL)
        {
            return false;
        }
        sum = sum + root->val;
        
        if(root->left == NULL && root->right == NULL && sum == targetSum)
        {
            return true;
        }
         
        bool x =PathSum(root->left,sum,targetSum);
        bool y = PathSum(root->right,sum,targetSum);
        
        
        return x|y;
        
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return PathSum(root,sum,targetSum);
        
    }
};
