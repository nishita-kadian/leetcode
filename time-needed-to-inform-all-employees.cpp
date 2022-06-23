//TIME NEEDED TO INFORM ALL EMPLOYEES -> 06/23/2022 12:12
//https://leetcode.com/problems/time-needed-to-inform-all-employees/submissions/
class Solution {
public:
    int numOfMinutes(int n, int headID, vector<int>& manager, vector<int>& informTime) {
        vector<vector<int>> graph(n);
        for(int i =0;i<manager.size();i++){
            if(manager[i]!=-1)
                graph[manager[i]].push_back(i);
        }
        vector<int> time(n,INT_MAX);
        time[headID] = informTime[headID];
        queue<int> pq;
        pq.push(headID);
        while(!pq.empty()){
            int p = pq.front();
            pq.pop();
            for(int i = 0;i<graph[p].size();i++){
                time[graph[p][i]] = time[p]+informTime[graph[p][i]];
                pq.push(graph[p][i]);
            }
        }
        return *max_element(time.begin(),time.end());
    }
};
