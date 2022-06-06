//INTERSECTION OF TWO LINKED LISTS -> 06/06/2022 23:17
//https://leetcode.com/problems/intersection-of-two-linked-lists/submissions/
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(headA==NULL || headB==NULL)
            return NULL;
        ListNode* p = headA;
        ListNode* q = headB;
        int A = 0;
        int B = 0;
        while(p!=NULL){
            p=p->next;
            A++;
        }
        while(q!=NULL){
            q=q->next;
            B++;
        }
        p = headA;
        q = headB;
        int diff = abs(A-B);
        while(diff!=0){
            if(A>B)
                p=p->next;
            else
                q=q->next;
            diff--;
        }
        while(p!=q){
            p=p->next;
            q=q->next;
        }  
        return p;
    }
};
