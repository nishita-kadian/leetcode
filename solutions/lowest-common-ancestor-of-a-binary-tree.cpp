//LOWEST COMMON ANCESTOR OF A BINARY TREE -> 07/23/2021 10:07
//https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/submissions/
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    pair<int,string> pa1 ;
    pair<int,string> pa2 ;
    string s = "";
    pair<bool, string> p1(TreeNode* root, TreeNode* target)
    {
        if(root == NULL)
        {
            return make_pair(false, "");
        }
        if(root == target)
        {
          return make_pair(true, "");  
        }
        
        pair<bool, string> leftAnswer = p1(root->left, target);
        pair<bool, string> rightAnswer = p1(root->right, target);

        if(leftAnswer.first == true)
            return make_pair(true, "0" + leftAnswer.second);
        if(rightAnswer.first == true)
            return make_pair(true, "1" + rightAnswer.second);
        return make_pair(false, "");
    }
    pair<bool,string> q1(TreeNode* root, TreeNode* target)
    {
        if(root==NULL)
        {
            return make_pair(false,"");
        }
        if(root==target)
        {
          return make_pair(true,"");  
        }
        pair<bool, string> leftAnswer = q1(root->left, target);
        pair<bool, string> rightAnswer = q1(root->right, target);

        if(leftAnswer.first == true)
            return make_pair(true, "0" + leftAnswer.second);
        if(rightAnswer.first == true)
            return make_pair(true, "1" + rightAnswer.second);
        return make_pair(false, "");
    }
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==NULL) return NULL;
        pair<bool, string> pathOne = p1(root,p);
        pair<bool, string> pathTwo = q1(root,q);
        // cout << pathOne.second << " " << pathTwo.second << endl;
        for(int i = 0 ; i < pathOne.second.size() && i < pathTwo.second.size()  ; i++)
        {
            if(pathOne.second[i]==pathTwo.second[i])
            {
                s += pathOne.second[i];
            }
            if(pathOne.second[i]!=pathTwo.second[i])
                break;
        }
        
        for(int i= 0 ;i<s.size();i++)
        {
            if(s[i]=='0')
            {
                root=root->left;
            }
            if(s[i]=='1')
            {
                root=root->right;
            }
        }
        
    return root;
    }
};
