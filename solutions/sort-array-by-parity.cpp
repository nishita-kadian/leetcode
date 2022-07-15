//SORT ARRAY BY PARITY -> 03/02/2022 14:54
//https://leetcode.com/problems/sort-array-by-parity/submissions/
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        int low  = 0;
        int mid = 0; 
        int high = nums.size()-1;
        while(mid<=high){
            if(nums[mid]%2==0){
                swap(nums[mid],nums[low]);
                mid++;
                low++;
            }
            else{
                mid++;
            }
        }
        return nums;
    }
};
