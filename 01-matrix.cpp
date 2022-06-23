//01 MATRIX -> 06/23/2022 14:38
//https://leetcode.com/problems/01-matrix/submissions/
class Solution {
public:
    // vector<int> xi = {-1,0,1,0};
    // vector<int> yi = {0,1,0,-1};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        vector<vector<int>> ans(mat.size(),vector<int> (mat[0].size(),INT_MAX));
        queue<pair<int,int>> q;
        for(int i = 0 ; i < mat.size() ; i++){
            for(int j = 0 ; j < mat[0].size() ; j++){
                if(mat[i][j]==0){
                    ans[i][j] = 0;
                    q.push({i,j});
                }
            }
        }
        vector<pair<int,int>> dxn = {{0,1},{1,0},{-1,0},{0,-1}};
        while(!q.empty()){
            pair<int,int> p =q.front();
            q.pop();
            
            for(int i = 0;i<dxn.size();i++){
                int x = p.first+dxn[i].first;
                int y = p.second+dxn[i].second;
                if(x>=0 && x<mat.size() && y>=0 && y<mat[0].size())
                {
                   if(ans[x][y] > ans[p.first][p.second]+1){
                       ans[x][y] = ans[p.first][p.second]+1;
                       q.push({x,y});
                   } 
                }            
            }
        }
    
      return ans;
    
    }
};
