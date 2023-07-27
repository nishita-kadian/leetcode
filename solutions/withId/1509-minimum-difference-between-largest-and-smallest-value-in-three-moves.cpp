class Solution {
public:
    int minDifference(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size()<=4){
            return 0;
        }
        int firstChange =  nums[nums.size()-1] - nums[3] ;
        int secondChange = nums[nums.size()-4] - nums[0];
        int thirdChange = nums[nums.size()-2] - nums[2];
        int fourthChange = nums[nums.size()-3] - nums[1];
        return min(min(thirdChange,fourthChange),min(firstChange,secondChange));
       
    }
};