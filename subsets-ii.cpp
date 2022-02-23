//SUBSETS II -> 02/23/2022 14:14
//https://leetcode.com/problems/subsets-ii/submissions/
class Solution {
public:
    void backtrack(int index,vector<int>& v,set<vector<int>> &s,vector<int>& nums){
        if(index==nums.size())
        {
            s.insert(v);
            return;
        }
        v.push_back(nums[index]);
        backtrack(index+1,v,s,nums);
        v.pop_back();
        backtrack(index+1,v,s,nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>> s;
        vector<int> v;
        sort(nums.begin(),nums.end());
        backtrack(0,v,s,nums);
        vector<vector<int>> ans(s.begin(),s.end());
        return ans;
    }
};
