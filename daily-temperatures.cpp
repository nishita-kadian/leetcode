//DAILY TEMPERATURES -> 12/18/2021 23:48
//https://leetcode.com/problems/daily-temperatures/submissions/
class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> ans(temperatures.size(),0);
        stack<pair<int,int>> s;
        for(int i = 0 ; i < temperatures.size() ; i++){
            while(!s.empty() && temperatures[s.top().first]<temperatures[i]){
                ans[s.top().first] = i - s.top().first;
                s.pop();
            }
            s.push(make_pair(i,temperatures[i]));
        }
        return ans;
    }
};

