// REMOVE COVERED INTERVALS -> 07/16/2022 12:13
//https://leetcode.com/problems/remove-covered-intervals/submissions/
class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(),intervals.end());
        int left  = -1;
        int right = -1;
        int res = 0;
        for(auto v:intervals){
            if(v[0] > left && v[1] > right){
                left = v[0];
                res++;
            }
            right = max(v[1],right);
        }
        return res;
    }
};
