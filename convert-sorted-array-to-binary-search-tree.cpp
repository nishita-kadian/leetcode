//CONVERT SORTED ARRAY TO BINARY SEARCH TREE -> 07/14/2022 13:10
//https://leetcode.com/problems/convert-sorted-array-to-binary-search-tree/submissions/
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
    TreeNode* buildTree(vector<int>& nums,int low, int high){
        if(low<=high){
            int mid = (low + high)/2;
            TreeNode* root = new TreeNode(nums[mid]);
            
            root->left = buildTree(nums,low,mid-1);
            root->right = buildTree(nums,mid+1,high);
            
            return root;
                
        }
        return NULL;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
          return buildTree(nums,0,nums.size()-1);  
    }
};
