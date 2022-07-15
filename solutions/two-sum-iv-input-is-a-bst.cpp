//  Two Sum IV - Input is a BST -> 11/30/2021 18:45
// https://leetcode.com/problems/two-sum-iv-input-is-a-bst/

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
    
    
//     map<int,int> m;
//     map<int,int> mapping(TreeNode* root)
//     {
//         if(root==NULL)
//             return m;
        
//         if(m.find(root->val)!=m.end())
//             m[root->val] += 1;
//         else
//             m[root->val] = 1;
        
//         mapping(root->left);
//         mapping(root->right);
         
//         return m;
//     }
//     bool isMapped = false;
//     void mapper(TreeNode* root){
//         if(!isMapped){
//             mapping(root);
//             isMapped = true;
//         }
//     }

     bool find(TreeNode* currentRoot, TreeNode* root, int&x) // find x
     {
         bool ans1 = false;
         bool ans2 = false;
         if(root == NULL)
             return false;
         if(x == root->val && currentRoot != root)
            return true;
         if(root->val >= x)
            ans1 = find(currentRoot, root->left, x);
         else
             ans2 = find(currentRoot, root->right, x);
         return (ans1|ans2);
     }
    
     bool recursive(TreeNode* currentRoot, TreeNode* root, int&k){
         if(currentRoot == NULL)
             return false;
         int y = currentRoot->val;
         int x = k - y;
         bool currentAns = find(currentRoot, root->left, x);
         bool currentAns1 =find(currentRoot, root->right, x);
         bool left = recursive(currentRoot->left, root, k);
         bool  right = recursive(currentRoot->right, root, k);
         return (left|right|currentAns|currentAns1);
     }
    
     bool findTarget(TreeNode* root, int& k) {
       
         if(root == NULL)
             return false;
         TreeNode* currentRoot = root;
         return recursive(currentRoot,root,k);
    }
};