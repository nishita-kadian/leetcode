// Second Minimum Node In a Binary Tree -> 07/16/2022 00:47
//https://leetcode.com/problems/second-minimum-node-in-a-binary-tree/submissions/
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
    unordered_set<int> s;
    priority_queue<int,vector<int>,greater<int>> pq;
    void secMin(TreeNode* root){
        if(root==NULL)
            return;
        if(s.find(root->val)==s.end()){
            s.insert(root->val);
            pq.push(root->val);
        }
        secMin(root->left);
        secMin(root->right);
        return;

    }
    int findSecondMinimumValue(TreeNode* root) {
        secMin(root);
        pq.pop();
        if(pq.empty())
            return -1;
        return pq.top();
    }
};
