//FIND THE TOWN JUDGE -> 12/09/2021 18:23
//https://leetcode.com/problems/find-the-town-judge/submissions/
class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<vector<int>> adj(n);
        vector<int> trusted_by(n,0);
        int first,second;
        int judge = -1;
        for(int i = 0  ; i < trust.size() ; i ++)
        {
            first = trust[i][0];
            second = trust[i][1];
            trusted_by[second-1]++;
            adj[first-1].push_back(second-1);
            
        }
        for(int i = 0 ; i < adj.size() ; i++)
        {
            if(adj[i].size() == 0 && trusted_by[i] == n-1)
            {
                // cout << "SETTING JUDGE" << endl;
                judge = i+1;
                break;
            }
        }
        
        return judge;
    }
};
