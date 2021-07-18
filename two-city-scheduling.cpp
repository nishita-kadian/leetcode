//TWO CITY SCHEDULING -> 07/18/2021 00:44
//https://leetcode.com/problems/two-city-scheduling/submissions/
class Solution {
public:
    static bool diffComp(pair<int,int> x, pair<int,int> y)
    {
        if(x.first<y.first)
            return false;
        
        return true;
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int sum = 0;
        int n = costs.size()/2;
        vector<pair<int,int>> diff;
        for(int i = 0;i<costs.size();i++)
        {
            diff.push_back(make_pair(costs[i][0]-costs[i][1],i));
            
        }
        sort(diff.begin(),diff.end(),diffComp);
        for(int i = 0 ; i < n ; i++)
        {
            int x = diff[i].second;
            sum = sum+ costs[x][1];
        }
        for(int i = n; i < 2*n ;i++)
        {
            int x = diff[i].second;
            sum = sum + costs[x][0];
        }
     return sum;   
    }
};
