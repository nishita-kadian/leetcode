//SORT COLORS -> 03/02/2022 11:48
//https://leetcode.com/problems/sort-colors/submissions/
class Solution {
public:
    void sortColors(vector<int>& nums) {
        priority_queue<int> pq;
        int size = nums.size();
        for(int i  = 0 ;i<size;i++)
        {
            pq.push(-nums[i]);
            
        }
        for(int i = 0 ; i<size ;i++)
        {
            nums[i] = -pq.top();
            pq.pop();
        }
    }
};
