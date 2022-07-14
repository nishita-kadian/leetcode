//CONSTRUCT BINARY TREE FROM PREORDER AND INORDER TRAVERSAL -> 07/14/2022 11:39
//https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/submissions/
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
    int index = 0;
    int search(vector<int>& inorder,int start,int end,int val){
        for(int i = start ; i <= end ; i++){
            if(inorder[i] == val)
                return i;
        }
        return -1;
    }
    
    TreeNode* build(vector<int>& preorder,vector<int>& inorder,int start,int end){
        if(start>end)
            return NULL;
        if(start==end){
            index++;
            return new TreeNode(inorder[start]);
        }
        
        int val = preorder[index];
        int pos = search(inorder,start,end,val);
        if(pos == -1)
            return NULL;
        
        index++;
        
        TreeNode* left = build(preorder,inorder,start,pos-1);
        TreeNode* right = build(preorder,inorder,pos+1,end);
        
        return new TreeNode(val,left,right);    
        
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        return build(preorder,inorder,0,preorder.size()-1);
    }
};
