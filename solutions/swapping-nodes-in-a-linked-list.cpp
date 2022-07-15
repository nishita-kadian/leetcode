//SWAPPING NODES IN A LINKED LIST -> 05/06/2022 13:47
//https://leetcode.com/problems/swapping-nodes-in-a-linked-list/submissions/
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
    ListNode* swapNodes(ListNode* head, int k) {
        // if(head==NULL)
        //     return NULL;
        // if(head->next ==NULL)
        //     return head;
        int i = 1;
        ListNode* p = head;
        while(p->next!=NULL){
            i++;
            p=p->next;
        }
        int j=0;
        if(k!=0)
            j = i-k+1;
        else
            j = i;
        p = head;
        ListNode* q = head;
        int t  = 1;
        int y = 1;
        while(t!=j){
            q=q->next;
            t++;
        }
         while(y!=k){
            p=p->next;
            y++;
        }
        int r = p->val;
        p->val = q->val;
        q->val = r;
        return head;
        
    }
};
