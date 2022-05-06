//SUBTREE OF ANOTHER TREE -> 05/06/2022 14:15
//https://leetcode.com/problems/subtree-of-another-tree/submissions/
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
   
    string inorder(TreeNode* root,string &v){
        if(root==NULL){
            v += " :NULL_LEAF: ";
            return v;
        }
        inorder(root->left,v);
        v += " :NODE_STARTS: " + to_string(root->val);
        inorder(root->right,v);
        v += " :RIGHT_ENDS: ";
        
        return v;
        
    }
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        vector<int> v;
        string tree1 = "";
        string tree2 = "";
        tree1 = inorder(root,tree1);
        v.clear();
        tree2 = inorder(subRoot,tree2);
        // cout << tree1 << endl;
        // cout << tree2 << endl;
        bool y = false;
        for(int i = 0 ; i < tree1.size() ; i++){
            if(tree1[i] == tree2[0]){
                int temp = i;
                y=true;
                int k = 1;
                if(i==tree1.size()-1 && tree2.size()!=1)
                {
                    y=false;
                    break;
                }
                i++;
                while(k<tree2.size()){
                    if(tree1[i]!=tree2[k]){
                        y = false;
                        break;
                    }
                    i++;
                    k++;
                }
                // cout<<y;
                i = temp;
              if(y == true){
                    break;
                }  
            }
        }

        if(y==true)
            return true;
        else
            return false;
    }
};
