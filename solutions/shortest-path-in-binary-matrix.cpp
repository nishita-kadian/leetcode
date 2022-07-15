//SHORTEST PATH IN BINARY MATRIX -> 06/28/2022 20:59
//https://leetcode.com/problems/shortest-path-in-binary-matrix/submissions/
class Solution {
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int dist = 0;
        int n = grid.size();
        int nodesPushed = 0;
        vector<vector<bool>> visited(n,vector<bool>(n,false));
        if(grid[0][0]==1 || grid[n-1][n-1]==1)
            return -1;
        queue<pair<int,int>> q;
        q.push({0,0});
        visited[0][0] = true;
        // dist++;
        vector<pair<int,int>> dir = {{1,1},{0,1},{1,0},{1,-1},{-1,1},{0,-1},{-1,0},{-1,-1}};
        while(!q.empty()){
            nodesPushed = q.size();
            dist++;
            for(int i =0;i<nodesPushed;i++){
                pair<int,int> p = q.front();
                q.pop();
                
                if(p.first == n-1  && p.second == n-1)
                    return dist;
            
                for(int i =0;i<dir.size();i++){
                        int x = dir[i].first+p.first;
                        int y =dir[i].second+p.second;
                        if(x<0 || y<0 || x>=n || y>=n || visited[x][y] == true || grid[x][y]==1)
                            continue;
                        q.push({x,y});
                        visited[x][y] = true;
                    }
                }
        }
        return -1;
    }
};
