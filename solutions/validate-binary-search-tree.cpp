//VALIDATE BINARY SEARCH TREE -> 07/03/2022 15:53
//https://leetcode.com/problems/validate-binary-search-tree/submissions/
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
    
    void inorder(TreeNode* &root, vector<int> &io){
        if(root==NULL)
            return ;
        inorder(root->left,io);
        io.push_back(root->val);
        inorder(root->right,io);
        return ;
    }
    
    bool isValidBST(TreeNode* root) {
        vector<int> io;
        inorder(root,io);
        for(int i = 0;i<io.size()-1;i++){
            if(io[i]>=io[i+1])
                return false;
        }
        return true;
    }
};
