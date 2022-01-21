//FIND TARGET INDICES AFTER SORTING ARRAY -> 01/21/2022 20:23
//https://leetcode.com/problems/find-target-indices-after-sorting-array/submissions/
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int> ans;
        vector<int>::iterator it = lower_bound(nums.begin(),nums.end(),target);
        int y = distance(nums.begin(),it);
        while(y<nums.size() && nums[y]==target){
            ans.push_back(y);
            y++;
        }
        return ans;
    }
};
