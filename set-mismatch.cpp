//SET MISMATCH -> 01/20/2022 00:51
//https://leetcode.com/problems/set-mismatch/submissions/
class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;
        vector<bool> seen(size,false);
        for(int i = 0 ; i < size ; i++){
            if(seen[nums[i]-1]==true)
                ans.push_back(nums[i]);
            if(seen[nums[i]-1]==false)
                seen[nums[i]-1] = true;
        }
        for(int i = 0 ; i < seen.size() ;i++){
            if(seen[i]==false)
                ans.push_back(i+1);
        }
       return ans; 
    }
};
