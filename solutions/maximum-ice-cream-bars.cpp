//MAXIMUM ICE CREAM BARS -> 02/19/2022 10:01
//https://leetcode.com/problems/maximum-ice-cream-bars/submissions/
class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(),costs.end());
        int count = 0;
        for(int  i = 0 ; i < costs.size() && coins>0 ; i++){
            if(costs[i]<=coins){
                count++;
                coins-=costs[i];
            }
            else
                break;
            
        }
        return count;
    }
};
