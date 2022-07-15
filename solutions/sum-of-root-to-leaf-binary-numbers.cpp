//SUM OF ROOT TO LEAF BINARY NUMBERS -> 01/11/2022 13:33
//https://leetcode.com/problems/sum-of-root-to-leaf-binary-numbers/submissions/
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
    int sum = 0 ; 
    string s  = "";
    int dfs(TreeNode* root,string s){
        if(root==NULL)
            return sum;
       if(root->left==NULL && root->right==NULL){
           
           s+=(char)root->val+48;
           // int x = stoi(s);
           int i =0;
           int x = 0;
           while(i<s.size()){
               x += (int)s[i] - 48;
               x *= 2;
               i++;
           }
            x=x/2;
           sum += x;
           cout<<x<<" "<<sum<<endl;
           return sum;
       }
        s += (char)root->val+48;
        // for(int i = 0 ;i<s.size();i++)
        //     cout<<s[i]<<endl;
        dfs(root->left,s);
        dfs(root->right,s);
        
        return sum;
    }
    int sumRootToLeaf(TreeNode* root) {
       int ans  = dfs(root,s);
       return ans; 
    }
};
