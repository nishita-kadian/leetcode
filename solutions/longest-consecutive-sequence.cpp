//LONGEST CONSECUTIVE SEQUENCE -> 07/07/2022 00:29
//https://leetcode.com/problems/longest-consecutive-sequence/submissions/
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s(begin(nums),end(nums));
        int res  = 0;
        for(int i=0;i<nums.size();i++) {
            if(s.find(nums[i]-1)==s.end()) {
                int curr=1;
                while(s.find(nums[i]+curr)!=s.end()) curr++;
                res=max(res, curr);
            }
        }
        return res;
        

    }
};
