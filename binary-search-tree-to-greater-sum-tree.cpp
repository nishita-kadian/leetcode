//BINARY SEARCH TREE TO GREATER SUM TREE -> 12/01/2021 20:07
//https://leetcode.com/problems/binary-search-tree-to-greater-sum-tree/submissions/
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
    int rightSum(TreeNode* root,int&rsum)
    {
        if(root == NULL)
            return rsum;
        rightSum(root->right,rsum);
        rsum = rsum + root->val;
        rightSum(root->left,rsum);
        return rsum;
    }
//     int leftSum(TreeNode* root,int&lsum)
//     {
//         if(root == NULL)
//             return lsum;
//         leftSum(root->right,lsum);
//         lsum = lsum + root->val;
//         leftSum(root->left,lsum);
//         return lsum;
//     }
//     TreeNode* newTreeRl(TreeNode* root, int&rsum)
//     {
//         if(root==NULL)
//             return root;
//         root->val = rsum + root->val;
//         return root;
//     }
//     TreeNode* newTreeR(TreeNode* root,int&rsum)
//     {
//         // if(root==NULL)
//         //     return root;
//         // if(root->left==NULL && root->right==NULL)
//         //     rsum=root->val;
//         // else{
//         //     rsum = rsum + root->val;
//         //     root->val = rsum;
//         // }
//         // newTreeR(root->right,rsum);
//         // newTreeRl(root->left,rsum);
        
        
//         if(root == NULL)
//             return root; 
//         if(root->left!=NULL)
//             root->val = rsum - root->left->val;
//         else 
//             root->val = rsum;
//         newTreeR(root->left,rsum);
//         rsum = rsum - root->val;
//         newTreeR(root->right,rsum);
//          return root;
//     }
    
    // TreeNode* newTreeL(TreeNode* root,int&lsum)
    // {
    //     if(root == NULL)
    //         return root;
    //     if(root->left!=NULL)
    //         root->val = lsum - root->left->val;
    //     else 
    //         root->val = lsum;
    //     newTreeL(root->left,lsum);
    //     lsum = lsum - root->val;
    //     newTreeL(root->right,lsum);
    //     return root;
    // }
    int x = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL)
            return root;
        bstToGst(root->right);
        x += root->val;
        root->val = x;
        bstToGst(root->left);
        return root;
        
        
        // int rsum = 0;
        // int lsum = 0;
        // rsum = rightSum(root->right,rsum);
        // root->val= rsum + root->val;
        // newTreeR(root->right,rsum);
        // rsum = rsum + root->val;
        // lsum = leftSum(root->left,lsum);
        // lsum += rsum;
        // newTreeL(root->left,lsum);
        // return root;
        
    }
};
