//DELETE NODE IN A LINKED LIST -> 04/25/2021 19:18
//https://leetcode.com/problems/delete-node-in-a-linked-list/submissions/
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
    void deleteNode(ListNode* node) {
     
        node->val=(node->next)->val;
        struct ListNode* p =node->next;
        node->next = p->next;
        
    }
};
