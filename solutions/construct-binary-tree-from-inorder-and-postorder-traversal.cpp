//CONSTRUCT BINARY TREE FROM INORDER AND POSTORDER TRAVERSAL -> 07/23/2021 00:09
//https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/submissions/
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
    int search(vector<int>& inorder, int start, int end, int val){
        for(int i = start;i <= end;i++){
            if(inorder[i]==val)
                return i;
        }
        return -1;
    }
    TreeNode* build(vector<int>& inorder, vector<int>& postorder, int start, int end){
        if(start > end)
            return NULL;
        if(start == end){
            index -= 1;
            return new TreeNode(inorder[start]);
        }
        int val = postorder[index];
        int pos = search(inorder, start, end, val);
        if(pos == -1){
            return NULL;   
        }
        index -= 1;
        TreeNode* right = build(inorder, postorder, pos+1, end);
        TreeNode* left = build(inorder, postorder, start, pos-1);
        return new TreeNode(val, left, right);
        
    }
    
//     int pos = 0;
    
//     TreeNode* build(vector<int>& inorder, vector<int>& postorder,int start ,int end,int index) {
//         if(start>end) return NULL ;
//         int val= postorder[index];
//         for(int i =0;i<inorder.size();i++)
//         {
//             if(inorder[i]==val)
//             {
//                 pos = i;
//             }
//         }
//         index--;
//         build(inorder,postorder,0,pos-1,index);
//         build(inorder,postorder,pos+1,postorder.size()-1,index);
//         return node;
//     }
        
        
        
// //         int n =  postorder.size();
// //         TreeNode* index = n-1;
// //         if(root==NULL)
// //         {
// //             return NULL;
// //         }
// //         for(int i = 0 ;i<inorder.size();i++)
// //         {
// //             if(inorder[i]==index){
// //                 pos = i;
// //                 break;
// //             }
// //         }
// //         build(inorder,postorder,0,pos-1);
// //         build(inorder,postorder,pos+1,n-1);
// //         return root;
        
// //     }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) 
    {
        index = postorder.size() - 1;
        TreeNode* ans = build(inorder, postorder, 0, postorder.size()-1); 
        return ans;
    }
};
