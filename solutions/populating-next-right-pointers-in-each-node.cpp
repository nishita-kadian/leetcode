//POPULATING NEXT RIGHT POINTERS IN EACH NODE -> 12/29/2021 20:51
//https://leetcode.com/problems/populating-next-right-pointers-in-each-node/submissions/
/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* left;
    Node* right;
    Node* next;

    Node() : val(0), left(NULL), right(NULL), next(NULL) {}

    Node(int _val) : val(_val), left(NULL), right(NULL), next(NULL) {}

    Node(int _val, Node* _left, Node* _right, Node* _next)
        : val(_val), left(_left), right(_right), next(_next) {}
}; 
*/

class Solution {
public:
    Node* connect(Node* root) {
        if(root==NULL)
            return NULL;
        queue<Node*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            for(int i = 0 ; i < n ; i++ ){
                Node* front = q.front();
                q.pop();
                if(i!=n-1)
                    front->next = q.front();
                if(front->left!=NULL)
                    q.push(front->left);
                if(front->right!=NULL)
                    q.push(front->right);
            }
        }
        return root;
    }
};
