//REMOVE NTH NODE FROM END OF LIST -> 04/10/2021 18:04
//https://leetcode.com/problems/remove-nth-node-from-end-of-list/submissions/
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
*      ListNode(){
            this.val = 0;
            this.next = nullptr;
        }
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL)
        {
            return head;
        }
        
        int i = 1;
        if(head->next == NULL)
        {
            if(n==1)
            {
                head = NULL;
                return head;
            }
            else 
            { 
                return head;
               
            }
            
        }
        struct ListNode* ptr = new ListNode();
        ptr = head;
        while(ptr->next!= NULL)
        {
            ptr = ptr->next;
            i++;
        }

        if(i==2)
        {
            
            if(n==1)
            {
                head->next = NULL;
                
            }
            
            else if(n==2)
            {
                
                head = head->next;
        
            }
            return head;
            
        }
        
        else 
        {
            int y = i - n;
            struct ListNode* p = new ListNode();
            struct ListNode* q = new ListNode();
            p = head;
            q = head->next;
            if(y==0)
            {
                head = head->next;
                return head;
            }
            else
            {
                for(int j = 1 ; j < y ; j++)
                {
                    p = p->next;
                    q = q->next;
            
                }
                p->next = q->next;
                return head;
            }
            
            
        }
        
    }
};
