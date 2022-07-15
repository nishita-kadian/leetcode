//MAXIMUM SUBARRAY -> 07/01/2022 11:48
//https://leetcode.com/problems/maximum-subarray/submissions/
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> v(nums.size(),0);
        v[0] = nums[0];
        for(int i = 1;i<nums.size();i++){
            v[i] = max(nums[i],nums[i]+v[i-1]);
        }   
        return *max_element(v.begin(),v.end());
    }
};
