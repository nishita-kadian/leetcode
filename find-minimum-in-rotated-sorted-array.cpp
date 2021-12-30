//FIND MINIMUM IN ROTATED SORTED ARRAY -> 12/30/2021 20:35
//https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/submissions/
class Solution {
public:
    int findMin(vector<int>& nums) {
        long int low = 0;
        long int high = nums.size() - 1;
        long int mid = (low+high)/2;
        while(high - low != 1)
        {
            if(nums[low]<=nums[mid] && nums[mid]<=nums[high])
            {
                return nums[low];
            }
            else if(nums[low]<=nums[mid] && nums[mid]>=nums[high])
            {
                low = mid;
                mid = (low+high)/2;
            }
            else if(nums[low]>=nums[mid] && nums[mid]<=nums[high])
            {
                high = mid;
                mid = (low+high)/2;
            }            
        }
        return min(nums[low], nums[high]);
    }
};
