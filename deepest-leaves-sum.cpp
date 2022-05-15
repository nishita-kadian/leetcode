//DEEPEST LEAVES SUM -> 05/15/2022 09:05
//https://leetcode.com/problems/deepest-leaves-sum/submissions/
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
    int sum = 0;
    vector<pair<int,int>> v;
    void level(TreeNode* root,int lev){
        if(root==NULL)
            return ;
        if(root->left==NULL && root->right==NULL)
            v.push_back(make_pair(lev,root->val));
        level(root->left,lev+1);
        level(root->right,lev+1);
        return;
    }
    int deepestLeavesSum(TreeNode* root) {
        int lev = 0;
        level(root,lev);
        sort(v.begin(),v.end());
        int x = (v.end()-1)->first;
        auto it = v.end()-1;
        cout<<x<<endl;
        while(it>=v.begin() && x==it->first){
            sum+=it->second;
            it--; 
         } 
        return sum;
    }
};
