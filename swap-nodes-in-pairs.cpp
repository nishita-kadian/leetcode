//SWAP NODES IN PAIRS -> 02/16/2022 09:46
//https://leetcode.com/problems/swap-nodes-in-pairs/submissions/
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
    ListNode* swapPairs(ListNode* head) {
        ListNode* p = head;
        while(p!=NULL && p->next!=NULL){
            int x = p->val;
            int y = p->next->val;
            p->val = y;
            p->next->val = x;
            p=p->next->next;
        }
        return head;
    }
};
