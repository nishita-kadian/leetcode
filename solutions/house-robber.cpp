//HOUSE ROBBER -> 03/08/2022 10:58
//https://leetcode.com/problems/house-robber/submissions/
class Solution {
public:
    unordered_map<int,int> cache;
    int dp(int index,vector<int> &nums){
        if(index >= nums.size())
            return 0;
        if(cache.find(index)!=cache.end()){
            return cache[index];
        }
        else
            return cache[index]=max(dp(index+2,nums)+nums[index],dp(index+1,nums));
    }
    int rob(vector<int>& nums) {
        int ans = max(dp(0,nums),dp(1,nums));
        return ans; 
    }
};
