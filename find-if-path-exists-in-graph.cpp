//FIND IF PATH EXISTS IN GRAPH -> 06/21/2022 21:07
//https://leetcode.com/problems/find-if-path-exists-in-graph/submissions/
class Solution {
public:
    void dfs(vector<bool> &visited,vector<vector<int>> &graph, int &source, int &destination){
        if(visited[source]==true) return;
        visited[source] = true;
        for(int i = 0;i<graph[source].size();i++){
            dfs(visited,graph,graph[source][i],destination);
        }
        return;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        vector<vector<int>> graph(n) ;
        for(int i =0;i<edges.size();i++){
            graph[edges[i][0]].push_back(edges[i][1]);
            graph[edges[i][1]].push_back(edges[i][0]);
        }
        vector<bool> visited(n);
        dfs(visited,graph,source,destination);
        return visited[destination];
    }
};
