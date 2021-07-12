//REMOVE DUPLICATES FROM SORTED ARRAY -> 07/12/2021 20:12
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/submissions/
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()==0)
            return nums.size();
        for(int i = 0 ; i < nums.size()-1 ; i++)
        {
            while(nums[i]==nums[i+1])
            {
                if(i==nums.size()-1)
                {
                    break;
                }
                 nums.erase(nums.begin()+(i+1));
            }
              
        }
        int x = nums.size();
        return x;
    }
};
