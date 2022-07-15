//PERMUTATIONS II -> 01/25/2022 23:00
//https://leetcode.com/problems/permutations-ii/submissions/
class Solution {
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
      vector<vector<int>> v;
        sort(nums.begin(),nums.end());
        do{
            vector<int> vec;
            for(auto i : nums)
                vec.push_back(i);
            v.push_back(vec);
        }while(next_permutation(nums.begin(),nums.end()));
        return v;
    }
};
