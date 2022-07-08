//RUNNING SUM OF 1D ARRAY -> 07/08/2022 14:08
//https://leetcode.com/problems/running-sum-of-1d-array/submissions/
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> rs(nums.size(), 0);
        for(int j = 0;j < rs.size();++j){
            if(j == 0)
                rs[j] = nums[j];
            else
                rs[j] = rs[j-1] + nums[j];
        }
        return rs;
    }
};
