//NUMBER OF ENCLAVES -> 06/20/2022 20:37
//https://leetcode.com/problems/number-of-enclaves/submissions/
class Solution {
public:
    int numEnclaves(vector<vector<int>>& grid) {
        queue<pair<int,int>> q;
        int ans  = 0;
        int size = grid.size();
        int size1 = grid[0].size();
        for(int i =0;i<size;i++){
            for(int j =0;j<size1;j++){
                ans+=grid[i][j];
                if(i*j==0 || i==grid.size()-1 || j==grid[0].size()-1 )
                    q.push({i,j});
            }
        }
        while(!q.empty()){
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            if(x<0 || y<0 || x==grid.size() || y==grid[x].size() || grid[x][y]!=1)
                continue;
            grid[x][y] = 0;
            ans--;
            q.push({x-1,y});
            q.push({x+1,y});
            q.push({x,y-1});
            q.push({x,y+1});  
        }
        return ans;
    }
};
