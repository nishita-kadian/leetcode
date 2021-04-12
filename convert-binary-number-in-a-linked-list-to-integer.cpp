//CONVERT BINARY NUMBER IN A LINKED LIST TO INTEGER -> 04/12/2021 01:28
//https://leetcode.com/problems/convert-binary-number-in-a-linked-list-to-integer/submissions/
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
    int getDecimalValue(ListNode* head) {
        struct ListNode* ptr = new ListNode();
        ptr= head;
        int j = 0;
        while(ptr!=NULL)
        {
            j = 2*j;
            j += (ptr->val);
            ptr=ptr->next;
            
        }
    
        return j;
        
    }
};
