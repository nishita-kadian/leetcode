//NUMBER OF PROVINCES -> 06/27/2022 16:40
//https://leetcode.com/problems/number-of-provinces/submissions/
class Solution {
public:
    
    int find(int &x,vector<int> &root){
        if(x == root[x])
            return x;
        return root[x] = find(root[x],root);
    }
    
    void union_(int &x, int &y,vector<int> &root,vector<int> &rank,int &count){
        int rootX = find(x,root);
        int rootY = find(y,root);
        if (rootX!=rootY){
            if(rank[rootX]>rank[rootY])
                root[rootY] = rootX;
            else if(rank[rootX]<rank[rootY])
                root[rootX] = rootY;
            else{
                root[rootY] = rootX;
                rank[rootX] += 1;
            }
            count--;
        }
    }
        
    int findCircleNum(vector<vector<int>>& isConnected) {
        int count = isConnected.size();
        vector<vector<int>> g(isConnected.size());
        for(int i =0;i<isConnected.size();i++){
            for(int j = 0;j<isConnected.size();j++){
                if(isConnected[i][j]==1 && i!=j){
                    g[i].push_back(j);
                    g[j].push_back(i);
                }
            }
        }
        vector<int> root(isConnected.size(),0);
        vector<int> rank(isConnected.size(),1);
        for(int i = 0;i<root.size();i++){
            root[i] = i;
        }
        vector<bool> visited(isConnected.size());
        queue<int> q; 
            for(int i = 0;i<visited.size();i++){
              if(visited[i]==false){
                  q.push(i);
                  visited[i] = true;
                  while(!q.empty()){
                      int p = q.front();
                      q.pop();
                      for(int i = 0 ; i < g[p].size() ; i++){
                          if(visited[g[p][i]]==false){
                              visited[g[p][i]] = true;
                              union_(p,g[p][i],root,rank,count);
                              q.push(g[p][i]);
                          }
                     }
                 }
             }
         }
        
        return count;
    }
};

