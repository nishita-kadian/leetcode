//MERGE INTERVALS -> 01/14/2022 14:05
//https://leetcode.com/problems/merge-intervals/submissions/
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        vector<int> temp(2,-1);
        vector<vector<int> > ans;
        for(int i = 0 ; i < intervals.size();i++){
            if(temp[0] == -1 && temp[1] == -1){
                temp = intervals[i];
            } else if(intervals[i][0] <= temp[1]){
                temp[1] = max(intervals[i][1], temp[1]);
            } else {
                ans.push_back(temp);
                temp = intervals[i];
            }
        }
        ans.push_back(temp);
        return ans;
    }
};
