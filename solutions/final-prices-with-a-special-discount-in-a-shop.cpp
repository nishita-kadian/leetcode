//FINAL PRICES WITH A SPECIAL DISCOUNT IN A SHOP -> 12/19/2021 21:04
//https://leetcode.com/problems/final-prices-with-a-special-discount-in-a-shop/submissions/
class Solution {
public:
    vector<int> finalPrices(vector<int>& prices) {
    stack<pair<int,int>> s;
        vector<int> solution = prices;
        for(int i = 0 ; i < prices.size() ; i++){
            while(!s.empty() && prices[i]<=s.top().second){
                solution[s.top().first] = s.top().second-prices[i];
                s.pop();
            }   
            s.push(make_pair(i,prices[i]));
        }
    return solution;
    }
};
