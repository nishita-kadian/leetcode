//LINKED LIST CYCLE -> 03/08/2022 11:53
//https://leetcode.com/problems/linked-list-cycle/submissions/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        bool x = true;
        if(head==NULL || head->next==NULL)
        {
            return false;
        }
        ListNode* p = head;
        ListNode* q = head->next;
        while(p!=q)
        {
            
            if(q==NULL || p==NULL || q->next==NULL || p->next==NULL)
            {
               x = false;
                break;
            }
            p = p->next;
            q = q->next->next;
            
        }
        return x;
        // int size = 0;
        // while(p!=NULL)
        // {
        //     p=p->next;
        //     size++;
        // }
        // p = head;
        // while(p->next!=NULL)
        // {
        //     p=q;
        //     while(p != q->next)
        //     {
        //         q=q->next;
        //     }
        //     if(p==q->next)
        //         return true;
        //     else
        //         p=p->next;
           
            
        // }
        // return false;
    }
};
