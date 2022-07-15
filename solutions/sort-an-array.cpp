//SORT AN ARRAY -> 07/05/2022 00:31
//https://leetcode.com/problems/sort-an-array/submissions/
class Solution {
public:
    vector<int> sortArray(vector<int>& nums) {
        priority_queue<int> pq;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            pq.push(-nums[i]);
        }
        int i =0;
        while(!pq.empty())
        {
            nums[i] = -pq.top();
            pq.pop();
            i++;
        }
        return nums;
    }
};
