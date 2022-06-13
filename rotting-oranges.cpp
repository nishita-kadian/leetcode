//ROTTING ORANGES -> 06/13/2022 14:20
//https://leetcode.com/problems/rotting-oranges/submissions/
class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int ans = 0;
        int cnt1 = 0;
        int cnt2 = 0;
        queue<pair<int,int>> q;
        int twos = 0;
        int ones = 0;
        for(int i =0;i<grid.size();i++){
            for(int j = 0 ; j < grid[i].size() ;j++){
                if(grid[i][j]==2){
                    twos++;
                    q.push(make_pair(i,j));
                }
                else if(grid[i][j]==1)
                    ones++;
            }
            
        }
        cnt1 = twos;
        cnt2 = 0;
        if(ones==0)
            return 0;
        else if(twos==0)
            return -1;
        
        while(!q.empty()){
            pair<int,int> p=q.front();
            q.pop();
            int y=p.first,x=p.second;
            cnt1--;
            
            if(y>0){
                if(grid[y-1][x]==1){
                    cnt2++;
                    grid[y-1][x]=2;
                    ones--; 
                    // one became two 
                    // and number of childs i.e. cnt2 increased by one
                    // and lets add it to the queue to check if it has any children later
                    q.push(make_pair(y-1,x));
                }
            }
            if(y<grid.size()-1){
                if(grid[y+1][x]==1){
                    cnt2++;
                    grid[y+1][x]=2;
                    ones--;
                    q.push(make_pair(y+1,x));
                }
            }
            
            if(x>0){
                if(grid[y][x-1]==1){
                    cnt2++;
                    grid[y][x-1]=2;
                    ones--;
                    q.push(make_pair(y,x-1));
                }
            }
            if(x<grid[0].size()-1){
                if(grid[y][x+1]==1){
                    cnt2++;
                    ones--;
                    grid[y][x+1]=2;
                    q.push(make_pair(y,x+1));
                }
            }
            
            if(cnt1==0){
                ans++;
                cnt1 = cnt2;
                cnt2=0;
            }
        }
        if(ones>0)
            return -1;
        else
            return ans-1;
    }
};














//         int time = 0;
//         queue<pair<int,int>> q;
//         for(int i =0;i<grid.size();i++){
//             for(int j = 0;j<grid[i].size();j++){
//                 if(grid[i][j]==2){
//                     q.push(make_pair(i,j));
//                     break;
//                 }
//             }
//         }
//         vector<vector<vector<vector<int>>>> graph(grid.size(),vector<vector<vector<int>>> (4,vector<vector<int>> (3)));
//         for(int i=0;i<grid.size();i++){
//             for(int j =0;j<grid[i].size();j++){
//                 if(j==0){
//                     graph[i][j]={i,j+1,grid[i][j+1]};
//                     if(i!=0)
//                         graph[i][j] = {i-1,j,grid[i-1][j]};
//                     if(i!=grid.size()-1)
//                         graph[i][j] = {i+1,j,grid[i+1][j]};
//                 }
//                 else if(j==grid[i].size()-1){
//                     graph[i][j] = {i,j-1,grid[i-1][j]};
//                     if(i!=0)
//                         graph[i][j] = {i-1,j,grid[i-1][j]};
//                     if(i!=grid.size()-1)
//                         graph[i][j] = {i+1,j,grid[i+1][j]};
//                 }
//                 else{
//                     graph[i][j] = {i,j-1,grid[i-1][j]};
//                     graph[i][j] = {i,j+1,grid[i-1][j]};
//                     graph[i][j] = {i-1,j,grid[i-1][j]};
//                     graph[i][j] = {i+1,j,grid[i+1][j]};
//                 }
//             }
//         }
        
//         while(!q.empty()){
//             pair<int,int> p = q.front();
//             q.pop();
//             for(int i =0;i<graph[p.first][p.second].size();i++){
//                 if(graph[p.first][p.second][i] == 2){
//                     q.push(make_pair(graph[p.first][p.second][i][0],graph[p.first][p.second][i][1]));
//                 }
//             }
//             time++;
            
            
//         }
        
//         // for(int i = 0 ; i < grid.size() ; i++){
//         //     for(int j = 0; j < grid[i].size() ; j++){
//         //         if(grid[i][j] == 2){
//         //             for(int k = 0 k<graph[i][j].size();k++){
//         //                 grid[graph[i][j][k][0]][graph[i][j][k][1]] = 2;
//         //                 // q.push(make_pair(graph[i][j][k][0],graph[i][j][k][1]));
//         //             }
//         //         }
//         //     }
//         // }
        
        
//         return time;









// int time = 0;
//         int sr = 0;
//         int sc = 0;
//         vector<vector<vector<pair<int,int>>>> graph(grid.size(),vector<vector<pair<int,int>>>(grid[0].size()));
//         for(int i =0;i<grid.size();i++){
//             for(int j = 0;j<grid[i].size();j++){
//                 if(j==0){
//                     graph[i][j].push_back(make_pair(i,j+1));
//                     if(i!=0)
//                         graph[i][j].push_back(make_pair(i-1,j));
//                     if(i!=grid.size()-1)
//                         graph[i][j].push_back(make_pair(i+1,j));
                    
//                 }
//                 else if(j==grid[i].size()-1){
//                     graph[i][j].push_back(make_pair(i,j-1));
//                     if(i!=0)
//                         graph[i][j].push_back(make_pair(i-1,j));
//                     if(i!=grid.size()-1)
//                         graph[i][j].push_back(make_pair(i+1,j));
//                 }
//                 else{
//                     graph[i][j].push_back(make_pair(i,j-1));
//                     graph[i][j].push_back(make_pair(i,j+1));
//                     if(i!=0)
//                         graph[i][j].push_back(make_pair(i-1,j));
//                     if(i!=grid.size()-1)
//                         graph[i][j].push_back(make_pair(i+1,j));
//                 }
//             }
//         }
        
//         for(int i =0;i<grid.size();i++){
//             for(int j = 0;j<grid[i].size();j++){
//                 if(grid[i][j]==2)
//                     sr = i; sc = j; break;
//             }
//         }
//         queue<pair<int,int>> q;
//         vector<vector<bool>> visited(grid.size(),vector<bool> (grid[0].size(),false));
//         q.push(make_pair(sr,sc));
//         visited[sr][sc] = true;
//         bool x = false;
//         while(!q.empty()){
//             pair<int,int> p = q.front();
//             q.pop();
//             for(int i =0;i<visited.size();i++){
//                 for(int j =0;j<visited[i].size();j++){
//                     if(visited[i][j]==false)
//                         x =true;break;
//                 }
//             }
//             if(!x)
//                 break;
//             for(int i = 0;i<graph[p.first][p.second].size();i++){
//                 if(visited[graph[p.first][p.second][i].first][graph[p.first][p.second][i].second]==false && grid[graph[p.first][p
    .second][i].first][graph[p.first][p.second][i].second]!=2){
//                     q.push(make_pair(graph[p.first][p.second][i].first,graph[p.first][p.second][i].second));
//                     visited[graph[p.first][p.second][i].first][graph[p.first][p.second][i].second] = true;
//                     grid[graph[p.first][p.second][i].first][graph[p.first][p.second][i].second] =2;
//                  }
//             }
//             time++;
            
//         }
//         for(int i =0;i<grid.size();i++){
//             for(int j = 0;j<grid[i].size();j++){
//                 if(grid[i][j]==1)
//                     return -1;
//                 }
//         }
//         return time;
