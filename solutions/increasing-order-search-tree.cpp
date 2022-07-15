//INCREASING ORDER SEARCH TREE -> 05/02/2022 12:01
//https://leetcode.com/problems/increasing-order-search-tree/submissions/
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
    TreeNode* n1 = new TreeNode(-1);
    TreeNode* head = n1;
    void inorder(TreeNode* root)
    {
        if (root==NULL)
            return;
        
        inorder(root->left);
        // TreeNode* n2 = new TreeNode();
        if(n1->val != -1)
            n1 = n1->right;
        n1->val = root->val;
        n1->right = new TreeNode();
        inorder(root->right);
        return;
    }
    
    
    TreeNode* increasingBST(TreeNode* root) {
        inorder(root);
        n1->right = NULL;
        return head; 
    }
};
