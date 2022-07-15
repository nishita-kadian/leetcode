//BEST TIME TO BUY AND SELL STOCK -> 07/10/2022 10:30
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int ans = 0 ;
        for(int i = 1 ; i < prices.size() ;i++){
            ans = max(ans,prices[i]-buy);
            buy = min(buy,prices[i]);
        }
        return ans;
    }
};
