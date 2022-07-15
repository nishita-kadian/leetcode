//MAXIMUM ERASURE VALUE -> 06/13/2022 08:13
//https://leetcode.com/problems/maximum-erasure-value/submissions/
class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        unordered_set<int> s;
        int max_score = 0;
        int curr_score = 0;
        int j = 0 ; 
        int i =0 ;
        while(i<nums.size()){
            while(s.find(nums[i])!=s.end()){
                curr_score -= nums[j];
                s.erase(nums[j]);
                j++;
            }
            s.insert(nums[i]);
            curr_score += nums[i];
            i++;
            max_score= max(max_score,curr_score);
        }
        return max_score;
    }
}; 
