//FIND CENTER OF STAR GRAPH -> 12/09/2021 10:51
//https://leetcode.com/problems/find-center-of-star-graph/submissions/
class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        int x = 0;
        for(int i = 0 ; i < edges.size() ; i++)
            x = max(x, max(edges[i][0], edges[i][1]));
        
        vector<vector<int>> adj_list(x);
        int first,second;
        int ans = 0;
        for(int i = 0 ; i < edges.size() ; i++)
        {
            first = edges[i][0];
            second = edges[i][1];
            first--, second--;
            adj_list[first].push_back(second);
            adj_list[second].push_back(first);
        }
        for(int i = 0 ; i < adj_list.size() ; i++)
        {
            if(adj_list[i].size() == adj_list.size()-1)
            {
                ans = i+1;
                break;
            }
        }
        return ans;
    }
};

