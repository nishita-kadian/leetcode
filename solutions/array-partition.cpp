//ARRAY PARTITION -> 01/22/2022 23:12
//https://leetcode.com/problems/array-partition/submissions/
class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int sum = 0;
        for(int i = 0;i<nums.size()-1;i=i+2){
            sum+=nums[i];
       }
       return sum; 
    }
};
