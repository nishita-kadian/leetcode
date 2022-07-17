// Maximum Binary Tree -> 07/15/2022 23:45
//https://leetcode.com/problems/maximum-binary-tree/submissions/
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
    int searchMax(vector<int>& nums,int start,int end){
        int maxi = INT_MIN;
            int index= 0;
        for(int i = start; i<=end;i++){
            if(nums[i]>maxi){
                index = i;
                maxi = nums[i];
            }
        }
        return index;
    }
    TreeNode* buildTree(vector<int>& nums,int start,int end){
        if(start>end)
            return NULL;
        if(start==end)
            return new TreeNode(nums[start]);

        int pos = searchMax(nums,start,end);
        // TreeNode* node = new TreeNode(nums[pos]);
         int value = nums[pos];

        TreeNode* left   = buildTree(nums,start,pos-1);
        TreeNode* right  = buildTree(nums,pos+1,end);
        // node->left   = buildTree(nums,start,pos-1);
        // node->right  = buildTree(nums,pos+1,end);

         return new TreeNode(value,left,right);
        // return node;
    }

    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
        return buildTree(nums,0,nums.size()-1);
    }
};
