//N ARY TREE POSTORDER TRAVERSAL -> 05/04/2021 22:46
//https://leetcode.com/problems/n-ary-tree-postorder-traversal/submissions/
/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<int> postorder(Node* root) {
        vector<int> op ;
        if(root == NULL)
            return op;
        
        for(int i = 0 ; i < root->children.size() ; i++)
        {
            vector<int> temp = postorder(root->children[i]);
            for(int j = 0 ; j < temp.size() ; j++)
            {
                op.push_back(temp[j]);
            }            
        }
        op.push_back(root->val);
        return op; 
    }
};
