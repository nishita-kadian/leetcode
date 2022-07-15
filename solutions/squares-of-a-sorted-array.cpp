//SQUARES OF A SORTED ARRAY -> 07/12/2021 12:44
//https://leetcode.com/problems/squares-of-a-sorted-array/submissions/
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> sv(nums.size());
        for(int i = 0; i < nums.size() ; i++)
        {
            sv[i] = (nums[i])*(nums[i]);
        
        }
        sort(sv.begin(),sv.end());
        
        return sv;
    }
        
};
