//BINARY TREE LEVEL ORDER TRAVERSAL -> 07/13/2022 10:44
//https://leetcode.com/problems/binary-tree-level-order-traversal/submissions/
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
    vector<vector<int>> v;
    queue<pair<TreeNode*,int>> q;
    vector<vector<int>> levelOrder(TreeNode* root) {
         if(root == NULL)
            return v;
         q.push({root, 0});
        while(!q.empty()){
            TreeNode* front = q.front().first;
            int front_level = q.front().second;
            q.pop();
            
            if(front->left != NULL)
                q.push({front->left,front_level+1});
            if(front->right != NULL)
                q.push({front->right,front_level+1});
            
            if(v.size() <= front_level){
                vector<int> temp;
                temp.push_back(front->val);
                v.push_back(temp);
            }
            else
                v[front_level].push_back(front->val);
        }
        return v;
    }
};
