//MIN COST CLIMBING STAIRS -> 06/30/2022 22:42
//https://leetcode.com/problems/min-cost-climbing-stairs/submissions/
class Solution {
public:
    unordered_map<int,int> cache;
    int dp(int index,vector<int> &cost){
        if(index < 0)
            return 0;
        if(cache.find(index)!=cache.end())
            return cache[index];
        else
            return cache[index] = min(dp(index-1,cost)+cost[index],dp(index-2,cost)+cost[index]);
        
    }
    int minCostClimbingStairs(vector<int>& cost) {
        return min(dp(cost.size()-2,cost),dp(cost.size()-1,cost));
    }
};
