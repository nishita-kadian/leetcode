//FIND A CORRESPONDING NODE OF A BINARY TREE IN A CLONE OF THAT TREE -> 05/18/2022 09:51
//https://leetcode.com/problems/find-a-corresponding-node-of-a-binary-tree-in-a-clone-of-that-tree/submissions/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* ans;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
        if(original==NULL)
            return NULL;
        if(original==target)
            ans= cloned;
        getTargetCopy(original->left,cloned->left,target);
        getTargetCopy(original->right,cloned->right,target);
        return ans;
    }
};
