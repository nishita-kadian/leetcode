//BINARY TREE ZIGZAG LEVEL ORDER TRAVERSAL -> 05/06/2022 16:19
//https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/submissions/
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
    queue<pair<TreeNode*, int> > q;
    vector<vector<int>> v;
    vector<vector<int>> levelOrderTraversal(TreeNode* root)
    {
        bool x = true;
        stack<TreeNode*> s;
        if(root==NULL)
            return v;
        
        // if level is even then x is true
        // if level is odd then x is false.
        
        // if x is true, we take output from Queue
        // if x is false, we take output from Stack
        
        vector<int> y;
        int currentLevel = 0;
        q.push(make_pair(root, 0));
        y.clear();
        while(!q.empty())
        {
            pair<TreeNode*, int> fronter = q.front();
            // push left and right elements
            if(fronter.first->left != NULL){
                q.push(make_pair(fronter.first->left, fronter.second + 1));
            }
            if(fronter.first->right != NULL){
                q.push(make_pair(fronter.first->right, fronter.second + 1));
            }
            
            // push for queue level
            if (x && currentLevel == fronter.second){
                y.push_back(fronter.first->val);
                q.pop();
            // push for stack level
            } else if(!x && currentLevel == fronter.second){
                s.push(fronter.first);
                q.pop();
            // push for level
            } else if(currentLevel != fronter.second){
                if(x == false){
                    while(!s.empty()){
                        y.push_back(s.top()->val);
                        s.pop();
                    }
                }
                v.push_back(y);
                y.clear();
                currentLevel = fronter.second;
                x = !x;
                if(x){
                    y.push_back(fronter.first->val);
                } else {
                    s.push(fronter.first);
                }
                q.pop();
            }
        }
        
        if(!s.empty()){
            while(!s.empty()){
                y.push_back(s.top()->val);
                s.pop();
            }
        }
        if(y.size() > 0)
            v.push_back(y);
        
        return v;
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        return levelOrderTraversal(root);   
    }
};
