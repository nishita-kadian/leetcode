//MERGE TWO BINARY TREES -> 04/30/2022 13:23
//https://leetcode.com/problems/merge-two-binary-trees/submissions/
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
    
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if(root1==NULL && root2==NULL)
            return NULL;
        int value = (root1==NULL?0:root1->val)+(root2==NULL?0:root2->val);
        TreeNode* node = new TreeNode(value);
        node->left = mergeTrees(root1==NULL?NULL:root1->left,root2==NULL?NULL:root2->left);
        node->right = mergeTrees(root1==NULL?NULL:root1->right,root2==NULL?NULL:root2->right);
        return node;
    }
};
