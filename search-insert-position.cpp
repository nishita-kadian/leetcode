//SEARCH INSERT POSITION -> 01/15/2022 20:00
//https://leetcode.com/problems/search-insert-position/submissions/
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        vector<int>::iterator it =  lower_bound(nums.begin(),nums.end(),target);
        return distance(nums.begin(),it);
    }
};
