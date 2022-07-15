//MINIMIZE MAXIMUM PAIR SUM IN ARRAY -> 01/17/2022 17:37
//https://leetcode.com/problems/minimize-maximum-pair-sum-in-array/submissions/
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int i = 0;
        int j = nums.size()-1;
        vector<int> sums;
        while(j>i){
            sums.push_back(nums[i]+nums[j]);
            i++;
            j--;
        }
        return *max_element(sums.begin(),sums.end());
    }        
};
