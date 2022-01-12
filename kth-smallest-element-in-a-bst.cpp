//KTH SMALLEST ELEMENT IN A BST -> 01/12/2022 19:13
//https://leetcode.com/problems/kth-smallest-element-in-a-bst/submissions/
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
    void inorder(TreeNode* root,priority_queue<int>& pq){
        if(root==NULL)
            return;
        inorder(root->left,pq);
        pq.push(-root->val);
        inorder(root->right,pq);
        return;
    }
    int kthSmallest(TreeNode* root, int k) {
        priority_queue<int> pq;
        inorder(root,pq);
        int ans = 0;
        for(int i = 0 ; i < k ; i++){
            ans = -pq.top();
            pq.pop();
        }
        return ans;
    }
};
