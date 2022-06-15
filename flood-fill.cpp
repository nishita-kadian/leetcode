//FLOOD FILL -> 06/15/2022 10:59
//https://leetcode.com/problems/flood-fill/submissions/
class Solution {
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        // if(std::equal(image.begin(), image.end(), image.begin())){
        //     for(int i=0;i<image.size();i++){
        //         for(int j = 0;j<image[i].size();j++){
        //             image[i][j]  =newColor;
        //         }
        //     }
        //     return image;
        // }
        int x = image[sr][sc];
        vector<vector<vector<pair<int,int>>>> graph(image.size(),vector<vector<pair<int,int>>>(image[0].size()));
        for(int i =0;i<image.size();i++){
            for(int j = 0;j<image[i].size();j++){
                if(j==0){
                    graph[i][j].push_back(make_pair(i,j+1));
                    if(i!=0)
                        graph[i][j].push_back(make_pair(i-1,j));
                    if(i!=image.size()-1)
                        graph[i][j].push_back(make_pair(i+1,j));
                    
                }
                else if(j==image[i].size()-1){
                    graph[i][j].push_back(make_pair(i,j-1));
                    if(i!=0)
                        graph[i][j].push_back(make_pair(i-1,j));
                    if(i!=image.size()-1)
                        graph[i][j].push_back(make_pair(i+1,j));
                }
                else{
                    graph[i][j].push_back(make_pair(i,j-1));
                    graph[i][j].push_back(make_pair(i,j+1));
                    if(i!=0)
                        graph[i][j].push_back(make_pair(i-1,j));
                    if(i!=image.size()-1)
                        graph[i][j].push_back(make_pair(i+1,j));
                }
            }
        }
        // for(int i =0;i<graph.size();i++){
        //     for(int j=0;j<graph[i].size();j++){
        //         for(int k = 0;k<graph[i][j].size();k++){
        //             cout<<graph[i][j][k].first<<"-"<<graph[i][j][k].second<<"  ";
        //         }
        //         cout<<endl;
        //     }
        // }
        queue<pair<int,int>> q;
        vector<vector<bool>> visited(image.size(),vector<bool> (image[0].size(),false));
        q.push(make_pair(sr,sc));
        visited[sr][sc] = true;
        
//         for(int i=0;i<image.size();i++){
//             for(int j =0;j<image[i].size();j++){
                
//             }
//         }
        while(!q.empty()){
            pair<int,int> p = q.front();
            if(image[p.first][p.second]==x)
                image[p.first][p.second] = newColor;
            q.pop();
            for(int i =0;i<graph[p.first][p.second].size();i++){
                if(visited[graph[p.first][p.second][i].first][graph[p.first][p.second][i].second]==false && image[graph[p.first][p
                    .second][i].first][graph[p.first][p.second][i].second]==x){
                    q.push(graph[p.first][p.second][i]);
                    visited[graph[p.first][p.second][i].first][graph[p.first][p.second][i].second]=true;
                }
            }
        }
        for(int i =0;i<visited.size();i++){
            for(int j=0;j<visited[i].size();j++){
                        cout<<visited[i][j]<<"  ";
                }
                cout<<endl;
            }
        
      return image;  
    }
};
