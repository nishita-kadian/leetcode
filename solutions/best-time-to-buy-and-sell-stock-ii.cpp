//BEST TIME TO BUY AND SELL STOCK II -> 07/04/2022 16:25
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/submissions/
class Solution {
public:
    int ans = 0;
    unordered_map<string,int> cache;
    int dp(int index,bool canBuy,vector<int>& prices){
        if(index==prices.size()){
            return 0;
        }
        stringstream ss;
        ss<<index<<'-'<<canBuy;
        string key = ss.str();
        if(cache.find(key)!=cache.end())
            return cache[key];
        
        if(canBuy)
            return cache[key]=max(-prices[index] + dp(index+1,!canBuy,prices),dp(index+1,canBuy,prices));
        
        else
            return cache[key]=max(prices[index] + dp(index+1,!canBuy,prices),dp(index+1,canBuy,prices));

    }
    
    int maxProfit(vector<int>& prices) {
        return dp(0,true,prices);
        
    }
};
