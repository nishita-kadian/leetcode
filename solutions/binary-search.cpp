//BINARY SEARCH -> 07/09/2021 20:59
//https://leetcode.com/problems/binary-search/submissions/
class Solution {
public:
    
    int search(vector<int>& nums, int target) {
        int low = 0;
        int high = nums.size() - 1;
        int mid = (low + high)/2;
        bool found = false;
        while( low <= high )
        {
             
            if(nums[mid] < target)
            {
                low = mid+1;
                mid = (low + high)/2;
            }
            else if(nums[mid]>target)
            {
                high = mid-1;
                mid = (low + high)/2;
            }
            else if(nums[mid]==target) 
            {
                found = true;
                break;
            }
            
            
        }
        if(found == true)
        {
            return mid;
        }
        else 
            return -1;
    }

};
