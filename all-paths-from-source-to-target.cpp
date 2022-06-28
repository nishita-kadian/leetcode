//ALL PATHS FROM SOURCE TO TARGET -> 06/28/2022 14:24
//https://leetcode.com/problems/all-paths-from-source-to-target/submissions/
class Solution {
public:
    void dfs(int index, vector<vector<int>> &graph, vector<int> temp, vector<vector<int>> &ans){
        if(index==graph.size()-1){
            ans.push_back(temp);
            return;
        }
       
        for(int i = 0;i<graph[index].size();i++){
            temp.push_back(graph[index][i]);
            dfs(graph[index][i],graph,temp,ans);
            temp.pop_back();
            
        }
    }
    
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<int> temp;
        temp.push_back(0);
        vector<vector<int>> ans;
        dfs(0,graph,temp,ans);
        return ans;
    }
};

