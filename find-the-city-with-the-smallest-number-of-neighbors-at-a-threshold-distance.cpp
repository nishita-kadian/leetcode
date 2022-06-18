//FIND THE CITY WITH THE SMALLEST NUMBER OF NEIGHBORS AT A THRESHOLD DISTANCE -> 06/18/2022 10:15
//https://leetcode.com/problems/find-the-city-with-the-smallest-number-of-neighbors-at-a-threshold-distance/submissions/
class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<pair<int,int>>> graph(n);
        for(int i = 0;i<edges.size();i++){
            graph[edges[i][0]].push_back({edges[i][1],edges[i][2]});
            graph[edges[i][1]].push_back({edges[i][0],edges[i][2]});
        }
        // int sum = 0;
        vector<vector<int>> a(n);
        vector<int> dist(n,INT_MAX);
        priority_queue<pair<int,int>> pq;
        for(int i = 0;i<graph.size();i++){
            pq.push({0,i});
            dist[i] = 0;
            while(!pq.empty()){
                pair<int,int> p = pq.top();
                pq.pop();
                for(int j = 0;j<graph[p.second].size();j++){    
                    if(dist[p.second]!=INT_MAX && dist[p.second]+graph[p.second][j].second<dist[graph[p.second][j].first]){
                        dist[graph[p.second][j].first] = dist[p.second]+graph[p.second][j].second;
                        pq.push({dist[graph[p.second][j].first],graph[p.second][j].first});
                    }
                }
            }
            for(int k = 0;k<dist.size();k++){
                if(k!=i && dist[k]<=distanceThreshold){
                    a[i].push_back(k);
                    dist[k] = INT_MAX;
                }
                
            }
            dist[i] = INT_MAX;
            
        } 
        int ans  = 0; 
        int x = INT_MAX;
        // for(int i = 0 ; i<a.size();i++){
        //     for(int j = 0;j<a[i].size();j++)
        //         cout<<a[i][j]<<"  ";
        //     cout<<endl;
        // }
        
        for(int i = 0 ; i<a.size();i++){
            // cout<<a[i].size()<<endl;
            if(a[i].size()<=x){
                x=a[i].size();
                ans = i;
            }
        }
        return ans;
    }
};
