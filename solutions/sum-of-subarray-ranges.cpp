//SUM OF SUBARRAY RANGES -> 06/20/2022 23:36
//https://leetcode.com/problems/sum-of-subarray-ranges/submissions/
class Solution {
public:
    long long subArrayRanges(vector<int>& nums) {
        long long sum =0;
        for(int i =0;i<nums.size()-1;i++){
            int j = i+1;
            int a = nums[i];
            int b = nums[i];
            while(j<nums.size()){
                a = max(a,nums[j]);
                b = min(b,nums[j]);
                sum += a-b;
                j++;
            }
        }
        return sum;
    }
};
