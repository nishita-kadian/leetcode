//COUNT NODES EQUAL TO AVERAGE OF SUBTREE -> 07/14/2022 15:48
//https://leetcode.com/problems/count-nodes-equal-to-average-of-subtree/submissions/
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
     int count  = 0;
     pair<int,int> nodes(TreeNode* root){
        if(root == NULL)
            return {0,0};
        
        pair<int,int> left = nodes(root->left);
        pair<int,int> right = nodes(root->right);
         
        int sum = left.first + right.first + root->val;
        int n = left.second + right.second + 1;
        if(sum/n == root->val)
            count++;
        
         return {sum,n};
         
     }
    int averageOfSubtree(TreeNode* root) {
        pair<int,int> p = nodes(root);
        return count;
    }
};
