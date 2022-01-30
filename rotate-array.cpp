//ROTATE ARRAY -> 01/30/2022 19:47
//https://leetcode.com/problems/rotate-array/submissions/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
       k = k % nums.size();
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin() + k);
        reverse(nums.begin() + k, nums.end());
    }
};
