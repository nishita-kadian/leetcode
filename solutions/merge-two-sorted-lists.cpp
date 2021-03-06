//MERGE TWO SORTED LISTS -> 07/09/2022 11:06
//https://leetcode.com/problems/merge-two-sorted-lists/submissions/
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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==NULL && l2==NULL )
        {
            return l1;
        }
      
        else if(l1==NULL )
        {
            return l2;
        }
        else if(l2==NULL)
        {
            return l1;
        }
    
    ListNode* head =new ListNode();
    ListNode* p = head;
    
    while(l1!=NULL && l2!=NULL)
    {
        if(l1->val < l2->val)
        {
            p->val = l1->val;
            l1=l1->next;
        }
        else
        {
            p->val=l2->val;
            l2=l2->next;
        }
        
        if(l1!=NULL && l2!=NULL)
        {
            p->next =new ListNode();
            p = p->next;
        }
    }
        if(l1==NULL)
        {
            p->next = l2;
        }
        if(l2==NULL)
            p->next = l1; 
    return head;
    }
};
