// Construct Binary Search Tree From Preorder Traversal -> 07/15/2022 22:59
//https://leetcode.com/problems/construct-binary-search-tree-from-preorder-traversal/submissions/
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
    int search(vector<int> &inorder,int start,int end,int value){
        for(int i = start ; i <= end ; i++){
            if(inorder[i]==value)
                return i;
        }
        return -1;
    }
    TreeNode* buildTree(vector<int> &preorder, vector<int> &inorder,int start,int end){
        if(start>end)
            return NULL;
        if(start==end){
            index++;
            return new TreeNode(inorder[start]);
        }
        int value = preorder[index];
        int pos = search(inorder,start,end,value);
        if(pos == -1)
            return NULL;

        index++;

        TreeNode* left = buildTree(preorder,inorder,start,pos-1);
        TreeNode* right = buildTree(preorder,inorder,pos+1,end);

        return new TreeNode(value,left,right);
    }

    TreeNode* bstFromPreorder(vector<int>& preorder) {
        vector<int> temp = preorder;
        sort(preorder.begin(),preorder.end());
        vector<int> inorder =  preorder;
        preorder = temp;
        return buildTree(preorder,inorder,0,preorder.size()-1);

    }
};
