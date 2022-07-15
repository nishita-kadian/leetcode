//PALINDROME LINKED LIST -> 05/20/2021 20:51
//https://leetcode.com/problems/palindrome-linked-list/submissions/
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
    bool isPalindrome(ListNode* head) {
        bool x = true;
        vector<int> h1;
        vector<int> h2;
        int size = 1;
        ListNode* p = head;
        while(p->next != NULL)
        {
            p = p->next;
            size++;
        }
        p = head;
        for(int i = 0 ; i < size/2 ; i++)
        {
            h1.push_back(p->val);
            p = p->next;
        }
         if(size%2 != 0)
        {
            p = p->next;
        }
        for(int i = 0 ; i < size/2  ; i++)
        {
            h2.push_back(p->val);
            p = p->next;
        }
       
        for(int j = 0 ; j < h1.size() ; j++)
        {
            if(h1[j] != h2[h1.size() - j-1] )
            {
                x =false;
                break;
            }
        }
        
        return x;
        
        
        
        
    }
};
