//BEST TIME TO BUY AND SELL STOCK IV -> 07/04/2022 17:41
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-iv/submissions/
class Solution {
public:
    unordered_map<string,int> cache;
    int dp(int index,bool canBuy,int transactions,vector<int> &prices,int &k){
        if(transactions > 2*k || index >= prices.size())
            return 0;
        stringstream ss;
        ss<<index<<'-'<<canBuy<<'-'<<'-'<<transactions;
        string key = ss.str();
        if(cache.find(key)!=cache.end())
            return cache[key];
        if(canBuy)
            return cache[key] = max(-prices[index] + dp(index+1,!canBuy,transactions+1,prices,k),dp(index+1,canBuy,transactions,prices,k));
        else
            return cache[key] = max(prices[index] + dp(index+1,!canBuy,transactions+1,prices,k),dp(index+1,canBuy,transactions,prices,k));
    }
    int maxProfit(int k, vector<int>& prices) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        return dp(0,true,0,prices,k);
        
    }
};
