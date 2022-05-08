//DELETE THE MIDDLE NODE OF A LINKED LIST -> 05/08/2022 14:19
//https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/submissions/
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
    ListNode* deleteMiddle(ListNode* head) {
        ios::sync_with_stdio(false);
        if(head==NULL)
            return NULL;
        if(head->next==NULL)
            return NULL;
        if(head->next->next==NULL){
            head->next = NULL;
            return head;
        }
        ListNode* p = head;
        ListNode* q = head->next;
        while(q!=NULL && q->next!=NULL && q->next->next!=NULL){
            p=p->next;
            q=q->next->next;
        }
        ListNode* t = p->next->next;
        p->next=t;
        return head;
    }
};
