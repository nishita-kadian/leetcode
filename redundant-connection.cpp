//REDUNDANT CONNECTION -> 06/19/2022 18:52
//https://leetcode.com/problems/redundant-connection/submissions/
class Solution {
public:
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        vector<int> parent(1005,-1);
        vector<int> ans(2,-1);
        for(int i = 0;i<parent.size();i++){
            parent[i] = i;
        }
        for(int i =0;i<edges.size();i++){
            int n1 = edges[i][0];
            int n2 = edges[i][1];
            while(n1!=parent[n1])
                n1 = parent[n1];
            while(n2!=parent[n2])
                n2 = parent[n2];
            if(n1==n2)
                ans={edges[i][0],edges[i][1]};
            else
                parent[n2] = n1;
        
    }
        return ans;
    }
};
