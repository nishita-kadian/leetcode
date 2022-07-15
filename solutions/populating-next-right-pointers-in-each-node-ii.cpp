//POPULATING NEXT RIGHT POINTERS IN EACH NODE II -> 07/22/2021 21:44
//https://leetcode.com/problems/populating-next-right-pointers-in-each-node-ii/submissions/
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
    int k = 0;
    void level(Node* root)
    {
        if(root==NULL)  return;
        queue<Node*> q;
        q.push(root);
        q.push(NULL);
        Node* curr = NULL;
        while(!q.empty())
        {
            Node* p = q.front();
            if(curr == p && p == NULL)
                break;
            // if(p != NULL)
            //     cout << p->val << endl;
            // else
            //     cout << "p is null, queue size is: " << q.size() << endl;
            q.pop();
            if(curr != NULL)
            {
                curr->next = p;
            }
            curr = p;
            // q.pop();
            if(curr != NULL){
                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            } else if(curr == NULL) {
                k++;
                q.push(NULL);
            }
        }
    }
    

    Node* connect(Node* root) {
        if(root==NULL){
            return NULL;
        }
        
        level(root);
        
//         int n =level(root);
//         root->next = NULL; 
//         for(int i = 1 ; i < n ; i++)
//         {
//             for(int j = 0 ; j < (2*n-1) ;j+2)
//             {
//                 root->left->next =root->right;
                
//             }
            
//         }
        
        return root;
    }
};
