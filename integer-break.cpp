//INTEGER BREAK -> 07/10/2022 17:43
//https://leetcode.com/problems/integer-break/submissions/
class Solution {
public:
    unordered_map<string,int> cache;
    int dp(int index,int remainingSum,int &n){
        if(remainingSum==0)
            return 1;
        if(remainingSum<=0)
            return -100;
        if(index>=n){
            if(remainingSum!=0)
                return -100;
        }
        
        stringstream ss;
        ss<<index<<'-'<<remainingSum;
        string key = ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        
        int maxLimit = 0;
        if(index!=1)
            maxLimit = remainingSum/index;
        else
            maxLimit  = n-1;
        int answer = 1;
        for(int i = 0;i<=maxLimit;i++){
            int x = 1;
            for(int j = 0 ; j < i ; j++ )
                x*=index;
            
            answer = max(answer,x*dp(index+1,remainingSum-index*i,n));
        }
        return cache[key] = answer;
    }
    // int dp(int x,int& n){
    //     if(cache.find(x)!=cache.end())
    //         return cache[x];
    //     if(x==n)
    //         cache[x] = 0;
    //     else
    //         cache[x]  = x;
    //     for(int i = 1 ; i < x ; i++){
    //         int val = dp(i,n)*dp(x-i,n);
    //         cache[x]  = max(cache[x],val);
    //     }
    //     return cache[x];
    // }
    int integerBreak(int n) {
        return dp(1,n,n);
        // int maxi = INT_MIN;
        // return dp(1,n);
        
    }
};
