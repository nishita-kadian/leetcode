//MIDDLE OF THE LINKED LIST -> 07/09/2022 11:08
//https://leetcode.com/problems/middle-of-the-linked-list/submissions/
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
    ListNode* middleNode(ListNode* head) {
        int i = 1;
        int j = 0;
        struct ListNode* ptr = new ListNode();
        ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            i++;
        }
        
            j = i/2 + 1;
            struct ListNode* p = new ListNode();
            p = head;
            for(int k = 1 ; k < j ; k++)
            {
                p = p->next;
            }
            return p;
     
    }
};
