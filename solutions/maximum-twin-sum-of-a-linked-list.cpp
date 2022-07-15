//MAXIMUM TWIN SUM OF A LINKED LIST -> 02/05/2022 13:35
//https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/submissions/
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
    ListNode* middle(ListNode* head){
        ListNode* slow = head;
        ListNode* fast = head->next;
        while(slow!=NULL && fast!=NULL && fast->next!=NULL){
            slow = slow->next;
            fast = fast->next;
            if(fast->next!=NULL)
                fast=fast->next;            
        }
        return slow;
    }
    ListNode* reverse(ListNode* head){
        ListNode* p  = head;
        ListNode* q = NULL;
        while(p!=NULL){
             ListNode *on=p->next;
            p->next=q;
            q=p;
            p=on;
        }
        return q;
    }
    int pairSum(ListNode* head) {
        ListNode* mid = middle(head);
        ListNode* p = head;
        ListNode* q  = reverse(mid->next);
        mid->next=NULL;
        int ans=0;
        while(p!=NULL && q!=NULL){
            ans = max(ans,p->val+q->val);
            p=p->next, q=q->next;
        }

        return ans;
    }
};
