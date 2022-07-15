//SUM OF NODES WITH EVEN VALUED GRANDPARENT -> 12/14/2021 19:28
//https://leetcode.com/problems/sum-of-nodes-with-even-valued-grandparent/submissions/
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
    int sumEvenGrandparent(TreeNode* root) {
        queue<pair<TreeNode*,int>> q;
        int level = 0;
        int sum = 0;
        q.push(make_pair(root,level));
        while(q.empty()==false){
            TreeNode* f = q.front().first;
            // cout<<f->val << " " << q.front().second <<endl;
            int currLevel = q.front().second;
            if(f->left!=NULL)
                q.push(make_pair(f->left,currLevel+1));
            if(f->right!=NULL)
                q.push(make_pair(f->right,currLevel+1));
            if(f->val % 2 == 0){
                if(f->left != NULL && f->left->left!=NULL)
                    sum += f->left->left->val;
                if(f->left != NULL && f->left->right!=NULL)
                    sum += f->left->right->val;
                if(f->right != NULL && f->right->left!=NULL)
                    sum += f->right->left->val;
                if(f->right != NULL && f->right->right!=NULL)
                    sum += f->right->right->val;
            }
            q.pop();
            
        }
        return sum;
    }
};
