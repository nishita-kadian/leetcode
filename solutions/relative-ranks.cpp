//RELATIVE RANKS -> 08/26/2021 13:27
//https://leetcode.com/problems/relative-ranks/submissions/
class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
    vector<string> ans(score.size());
    priority_queue<pair<int,int> > pq;
        pair<int,int> top;
        for(int i = 0 ; i < score.size() ; i++)
        {
            pq.push(make_pair(score[i],i));
        }
            if(!pq.empty())
            {
                top = pq.top();
                ans[top.second] = "Gold Medal";
                pq.pop();
            }
            if(!pq.empty())
            {
                top = pq.top();
                ans[top.second] = "Silver Medal";
                pq.pop();
            }
            if(!pq.empty())
            {
                top = pq.top();
                ans[top.second] = "Bronze Medal";
                pq.pop();   
            }
        
        if(!pq.empty())
        {    
            int j = 4;
            for(int i = 0 ; i <score.size()-3; i++)
            {
                top = pq.top();
                string s = to_string(j);
                ans[top.second] = s;
                pq.pop();
                j++;
            }
        }
        return ans;
    }
};
