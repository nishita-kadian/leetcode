//SORT LIST -> 02/24/2022 11:19
//https://leetcode.com/problems/sort-list/submissions/
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
    ListNode* sortList(ListNode* head) {
        if(head==NULL)
            return NULL;
        ListNode* p = head;
            vector<int> v;
        while(p!=NULL){
            v.push_back(p->val);
            p=p->next;
        }
        sort(v.begin(),v.end());
        p=head;
        int i =0;
        while(p!=NULL){
            p->val = v[i];
            i++;
            p=p->next;
        }
//         while(p!=NULL){
//             int mini = p->val;
//             int temp = p->val;
//             ListNode* q = p->next;
//             while(q!=NULL){
//                 mini = min(mini,q->val);
//                 q = q->next;
//             }
//             q = p;
//             while(q->val!=mini){
//                 q=q->next;
//             }
//             p->val = mini;
//             q->val = temp;
//             p=p->next;
//         }
        return head;
    }
};
