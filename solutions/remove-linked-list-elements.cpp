//REMOVE LINKED LIST ELEMENTS -> 11/18/2021 21:46
//https://leetcode.com/problems/remove-linked-list-elements/submissions/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeElements(ListNode* head, int val) {
        if(head==NULL)
            return head;
        // else if(head->next == NULL && head->val==val)
        //     return NULL;
        // else if(head->next==NULL && head->val!=val)
        //     return head;
        while(head!=NULL && head->val==val)
        {
                head=head->next; 
        }
        
        ListNode* p = head;
        ListNode* q = NULL;
       
        
        while(p!= NULL)
        {
            if(p->val == val)
            {
                q->next = p->next;
                p = p->next;
            }
            else 
            {
                q=p;
                p=p->next;
                     
            }
        }
        
//         if(q->next == NULL && q->val == val){
//             p->next = NULL;
//         }
//         else if(q->next==NULL && p->val == val)
//         {
//             head = q;
//             return head;
//         }
        
//         if(p->next==NULL && p->val==val)
//             return NULL;
        

//         if(p == NULL)
//             head = NULL;
        
        return head;
    }
};
