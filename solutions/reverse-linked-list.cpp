//REVERSE LINKED LIST -> 07/09/2022 11:06
//https://leetcode.com/problems/reverse-linked-list/submissions/
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return head;
        ListNode* p = head;
        ListNode* q = head->next;
        
        while(q->next!=NULL){
            ListNode* temp = q->next;
            q->next = p;
            p = q;
            q = temp;
            
        }
        q->next = p;
        head->next = NULL;
        head  = q; 
        return head;
    }
};
