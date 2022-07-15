//MOST PROFIT ASSIGNING WORK -> 02/19/2022 12:00
//https://leetcode.com/problems/most-profit-assigning-work/submissions/
class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        int profit_ans = 0;
        // vector of pairs where pair of profit and difficulty is made        
        vector<pair<int,int>> v;
        for(int i = 0; i<difficulty.size();i++){
            v.push_back(make_pair(profit[i],difficulty[i]));
        }
        sort(v.begin(),v.end());
        for(int i = 0 ; i < worker.size() ; i++){
            for(int j = v.size()-1 ; j>=0 ; j--){
                if(v[j].second<=worker[i]){
                    profit_ans+=v[j].first;
                    break;
                }
            }
        }
        return profit_ans;
    }
};
