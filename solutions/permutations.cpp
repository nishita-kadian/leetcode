//PERMUTATIONS -> 01/21/2022 23:30
//https://leetcode.com/problems/permutations/submissions/
class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> v;
        do{
            vector<int> vec;
            for(auto i : nums){
                vec.push_back(i);
            }
            v.push_back(vec);
                
        }while(next_permutation(nums.begin(),nums.end()));
        return v;
    }
};
