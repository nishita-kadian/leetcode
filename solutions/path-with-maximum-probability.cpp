//PATH WITH MAXIMUM PROBABILITY -> 01/03/2022 14:10
//https://leetcode.com/problems/path-with-maximum-probability/submissions/
class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        vector<vector<pair<int, double>>> graph(n,vector<pair<int,double>>());
        for(int i = 0 ; i < edges.size() ; i++){
            int first = edges[i][0];
            int second = edges[i][1];
            graph[first].push_back({second,succProb[i]});
            graph[second].push_back({first,succProb[i]});
        }
        vector<bool> visited(n,false);
        priority_queue<pair<double,int>> pq;
        pq.push({1.0,start});
        while(pq.size()!=0){
            int size = pq.size();
            while(size-- > 0){
                pair<double,int> maxi = pq.top();
                pq.pop();
                if(maxi.second == end)
                    return maxi.first;
                visited[maxi.second] = true;
                for(auto it : graph[maxi.second]){
                    if(!visited[it.first])
                        pq.push({it.second * maxi.first,it.first});
                }
            }
            
        }
        return 0;
    }
};
