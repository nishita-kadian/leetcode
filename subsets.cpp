//SUBSETS -> 02/23/2022 12:33
//https://leetcode.com/problems/subsets/submissions/
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int index, vector<int> &nums,vector<int> &subset){
        if(index==nums.size()){
            ans.push_back(subset);
            return;   
        }
        subset.push_back(nums[index]);
        backtrack(index+1,nums,subset);
        subset.pop_back();
        backtrack(index+1,nums,subset);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> subset;
        backtrack(0,nums,subset);
        return ans;
    }
};
