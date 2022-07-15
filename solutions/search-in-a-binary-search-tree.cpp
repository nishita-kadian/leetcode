//SEARCH IN A BINARY SEARCH TREE -> 01/30/2022 18:25
//https://leetcode.com/problems/search-in-a-binary-search-tree/submissions/
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
    TreeNode* ans ;
    TreeNode* searchBST(TreeNode* root, int val){ 
         if(root==NULL)
            return NULL;
        if(root->val==val)
           ans = root;
        if(val<root->val)
            searchBST(root->left,val);
        else
            searchBST(root->right,val);
        return ans;
    }
};
