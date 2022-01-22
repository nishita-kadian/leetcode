//HEIGHT CHECKER -> 01/22/2022 17:45
//https://leetcode.com/problems/height-checker/submissions/
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int>sorted = heights;
        sort(sorted.begin(),sorted.end());
        int count = 0;
        for(int i = 0 ; i < heights.size() ; i++){
            if(heights[i]!=sorted[i])
                count++;
        }
        return count;
    }
};
