//NUMBER OF ISLANDS -> 06/15/2022 10:59
//https://leetcode.com/problems/number-of-islands/submissions/
class Solution {
public:
    int numIslands(vector<vector<char>>& grid) {
        int count = 0;
        vector<vector<bool>> visited(grid.size(),vector<bool>(grid[0].size()));
        vector<vector<vector<pair<int,int>>>> graph(grid.size(),vector<vector<pair<int,int>>>(grid[0].size()));
        for(int i =0;i<grid.size();i++){
            for(int j = 0;j<grid[i].size();j++){
                if(j==0){
                    graph[i][j].push_back(make_pair(i,j+1));
                    if(i!=0)
                        graph[i][j].push_back(make_pair(i-1,j));
                    if(i!=grid.size()-1)
                        graph[i][j].push_back(make_pair(i+1,j));
                    
                }
                else if(j==grid[i].size()-1){
                    graph[i][j].push_back(make_pair(i,j-1));
                    if(i!=0)
                        graph[i][j].push_back(make_pair(i-1,j));
                    if(i!=grid.size()-1)
                        graph[i][j].push_back(make_pair(i+1,j));
                }
                else{
                    graph[i][j].push_back(make_pair(i,j-1));
                    graph[i][j].push_back(make_pair(i,j+1));
                    if(i!=0)
                        graph[i][j].push_back(make_pair(i-1,j));
                    if(i!=grid.size()-1)
                        graph[i][j].push_back(make_pair(i+1,j));
                }
            }
        }
        
        queue<pair<int,int>> q;
        // q.push(make_pair(0,0));
        // visited[0][0] = true;
        for(int i = 0 ; i < grid.size() ; i++){
            for(int j =0 ; j < grid[i].size() ; j++){
                if(visited[i][j]==false && grid[i][j]=='1'){
                    q.push(make_pair(i,j));
                    // cout<<i<<'-'<<j<<endl;
                    visited[i][j] = true;
                    while(!q.empty()){
                        pair<int,int> p = q.front();
                        // cout<<p.first<<'-'<<p.second<<'-'<<endl;
                        q.pop();
                        for(int i = 0 ; i < graph[p.first][p.second].size() ; i++){
                            if(visited[graph[p.first][p.second][i].first][graph[p.first][p.second][i].second] == false && grid[graph[p
                                .first][p.second][i].first][graph[p.first][p.second][i].second]=='1'){
                                q.push(make_pair(graph[p.first][p.second][i].first,graph[p.first][p.second][i].second));
                                visited[graph[p.first][p.second][i].first][graph[p.first][p.second][i].second] = true;
                            }
                        }
                    }
                    count++;
                }
                
            }
          
            
        }
        return count;
    }
};
