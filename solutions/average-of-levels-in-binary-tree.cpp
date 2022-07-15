//AVERAGE OF LEVELS IN BINARY TREE -> 11/17/2021 14:47
//https://leetcode.com/problems/average-of-levels-in-binary-tree/submissions/
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
    double avg=0;
    vector<double> ans;
    double currentLevel = 0;
    double curLevelTotal = 0;
    double curLevelCount = 0;
    vector<double> averageOfLevels(TreeNode* root) {
        q.push(make_pair(root, 0));
        while(!q.empty())
         {
             pair<TreeNode*, int> x = q.front();
             if(x.first->left!=NULL)
                 q.push(make_pair(x.first->left, x.second+1));
             if(x.first->right!=NULL)
                 q.push(make_pair(x.first->right, x.second+1));
             
            if(currentLevel == x.second){
                curLevelTotal += x.first->val;
                curLevelCount += 1;
            } else {
                currentLevel = x.second;
                ans.push_back((double)curLevelTotal/(double)curLevelCount);
                curLevelTotal = x.first->val;
                curLevelCount = 1;
            }
            
            q.pop();
         }
       ans.push_back((double)curLevelTotal/(double)curLevelCount);
       return ans; 
    }
};
