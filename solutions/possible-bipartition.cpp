//POSSIBLE BIPARTITION -> 06/23/2022 22:13
//https://leetcode.com/problems/possible-bipartition/submissions/
class Solution {
public:
    bool possibleBipartition(int n, vector<vector<int>>& dislikes) {
        queue<int> q;
        vector<vector<int>> graph(n);
        for(int i = 0;i<dislikes.size();i++){
            graph[dislikes[i][0]-1].push_back(dislikes[i][1]-1);
            graph[dislikes[i][1]-1].push_back(dislikes[i][0]-1);
        }
        vector<int> colour(n,-1);
        colour[0] = 1;
        q.push(0);
        while(!q.empty()){
            int p =q.front();
            q.pop();
            if(graph[p].size()!=0){
                for(int i = 0;i<graph[p].size();i++){
                        if(colour[graph[p][i]] == -1){
                            q.push(graph[p][i]);
                            colour[graph[p][i]] = 1 - colour[p];                    
                        }
                        else if(colour[graph[p][i]] == colour[p])
                            return false;
                }
            }
            if(q.empty()){
                for(int i = 0 ;i<n;i++){
                    if(graph[i].size()!=0 && colour[i]==-1){
                        q.push(i);
                        colour[i] = 1;
                        break;
                    }
                }
            }
        }
        return true;
        
    }
};



