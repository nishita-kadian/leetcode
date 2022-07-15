//RICHEST CUSTOMER WEALTH -> 02/01/2022 00:00
//https://leetcode.com/problems/richest-customer-wealth/submissions/
class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
     int sum = INT_MIN;
        for(int i = 0 ; i < accounts.size() ; i++){
            int temp = 0;
            for(int j = 0 ; j < accounts[i].size() ; j++){
                temp+=accounts[i][j];
            }
            sum = max(sum,temp);
        }
        return sum;
    }
};
