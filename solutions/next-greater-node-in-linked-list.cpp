//NEXT GREATER NODE IN LINKED LIST -> 04/18/2021 11:30
//https://leetcode.com/problems/next-greater-node-in-linked-list/submissions/
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
    vector<int> nextLargerNodes(ListNode* head) {
    struct ListNode* p = head;
    struct ListNode* q = head; 
    vector<int> v;
    while(p!=NULL)
    {
        q=p;
        while(q!= NULL)
        {
            if(q->val > p->val)
            {
                v.push_back(q->val);
                break;
            }
            else 
            {
                q = q->next;
            }
        }
        
        if(q==NULL)
        {
            v.push_back(0);
        }
        p = p->next;
    }
      return v;
    }
    };
