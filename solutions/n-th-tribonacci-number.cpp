//N TH TRIBONACCI NUMBER -> 07/04/2022 23:27
//https://leetcode.com/problems/n-th-tribonacci-number/submissions/
class Solution {
public:
    unordered_map<int,int> cache;
    int dp(int n){
        if(n==0 || n == 1)
            return n;
        if(n == 2)
            return 1;
        if(cache.find(n)!=cache.end())
            return cache[n];
        else
            return cache[n] = dp(n-1)+dp(n-2)+dp(n-3);
        
    }
    int tribonacci(int n) {
       return dp(n);
    }
};
