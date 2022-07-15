//LEAF SIMILAR TREES -> 11/17/2021 17:32
//https://leetcode.com/problems/leaf-similar-trees/submissions/
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
    vector<int> leafValSeq(TreeNode * root,vector<int>& v)
    {
        if(root==NULL)
            return v;
        if(root->left==NULL && root->right==NULL)
        {
            v.push_back(root->val);
            return v;
        }
        leafValSeq(root->left,v);
        leafValSeq(root->right,v);
        return v;
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> v;
        bool x=true;
        vector<int> r1 = leafValSeq(root1,v);
        v.clear();
        vector<int> r2 = leafValSeq(root2,v);
        // for(int i=0;i<r1.size();i++)
        // {
        //     cout<<r1[i]<<endl;
        // }
        // for(int i=0;i<r2.size();i++)
        // {
        //     cout<<r2[i]<<endl;
        // }
        if(r1.size()==r2.size())
        {
            for(int i = 0;i<r1.size();i++)
            {
                if(r1[i]!=r2[i])
                {
                    x=false;
                    break;
                }
            }
        }
        else
            x =false;
        
        return x;
    }
};
