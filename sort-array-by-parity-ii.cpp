//SORT ARRAY BY PARITY II -> 08/11/2021 17:45
//https://leetcode.com/problems/sort-array-by-parity-ii/submissions/
class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int k = 0 ;
        int j = 1 ;
        vector<int> ans(nums.size());
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(nums[i]%2==0)
            {
                ans[k]=(nums[i]);
                k = k + 2;
            }
            else 
            {
                ans[j]=(nums[i]);
                j = j + 2;
            }
        }
        return ans;
    }
};
