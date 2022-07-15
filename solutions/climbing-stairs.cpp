//CLIMBING STAIRS -> 07/04/2022 23:32
//https://leetcode.com/problems/climbing-stairs/submissions/
class Solution {
public:
    unordered_map<int,int> cache;
    int dp(int n){
        if(n==1 || n==2)
            return n;
        if(cache.find(n)!=cache.end())
            return cache[n];
        else
            return cache[n] = dp(n-1)+dp(n-2);
        
    }
    int climbStairs(int n) {
       return dp(n); 
    }
};
