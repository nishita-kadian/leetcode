//BINARY TREE RIGHT SIDE VIEW -> 07/11/2022 13:14
//https://leetcode.com/problems/binary-tree-right-side-view/submissions/
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
    vector<int> v;
    queue<TreeNode*> q;
    
    vector<int> BFS(TreeNode* root)
    {
        if(root==NULL)
            return v;
        q.push(root);
        q.push(NULL);
        
        while(!q.empty())
        {
            TreeNode* f = q.front();
            q.pop();
            if(f!=NULL)
            {
                if(q.front()==NULL){
                    v.push_back(f->val);
                }
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
                
            }
            else if(!q.empty())
                q.push(NULL);
        }
        return v;
    }
    vector<int> rightSideView(TreeNode* root) {
        return BFS(root);
    }
};
