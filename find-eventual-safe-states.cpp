//FIND EVENTUAL SAFE STATES -> 06/24/2022 15:44
//https://leetcode.com/problems/find-eventual-safe-states/submissions/
class Solution {
public:
    bool dfs(int &index , vector<bool> &safeNodes , vector<vector<int>> &graph ,vector<bool> &visited){
        visited[index] = true;
        bool currAns = true;
        // if(graph[index].size()==0){
        //     ans.push_back(x);
        //     return;
        // }
        // visited[index] = true;
        for(int i =0;i<graph[index].size();i++){
            if(visited[graph[index][i]]==false)
                currAns =  currAns && dfs(graph[index][i],safeNodes,graph,visited);
            else
                currAns = currAns && safeNodes[graph[index][i]];
        }
        
        safeNodes[index] = currAns;
        return currAns;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        vector<int> ans;
        vector<bool> visited(graph.size(),false);
        vector<bool> safeNodes(graph.size(),false);
        // int x = 0;
        for(int i = 0;i<visited.size();i++){
            if(visited[i]==false){
                // x = i;
                // visited[i] = true;
                dfs(i,safeNodes,graph,visited);
            }
        }
        for(int i =0;i<safeNodes.size();i++){
            if(safeNodes[i]==true)
                ans.push_back(i);
        }
        sort(ans.begin(),ans.end());
        return ans;
    }
};
