//MINIMUM NUMBER OF VERTICES TO REACH ALL NODES -> 06/16/2022 11:15
//https://leetcode.com/problems/minimum-number-of-vertices-to-reach-all-nodes/submissions/
class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int> ans;
        vector<bool> visited(n,false);
        vector<int> indeg(n,0);
        for(int i =0;i<edges.size();i++){
            indeg[edges[i][1]]++;
            visited[edges[i][1]] =true;
            visited[edges[i][0]] = true;
        }
        for(int i = 0;i<indeg.size();i++){
            if(indeg[i]==0 || visited[i] ==false)
                ans.push_back(i);
        }
     return ans;
    }
        
};
