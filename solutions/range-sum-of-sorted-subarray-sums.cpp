//RANGE SUM OF SORTED SUBARRAY SUMS -> 07/02/2022 12:39
//https://leetcode.com/problems/range-sum-of-sorted-subarray-sums/submissions/
class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> f;
        int M = 1000000007;
        for(int i =0;i<nums.size();i++){
            int sum = 0;
            for(int j = i;j<nums.size();j++){
                sum+=nums[j];
                f.push_back(sum);
            }
        }
        sort(f.begin(),f.end());
        int i = left-1;
        long ans = 0;
        while(i<=right-1){
            ans+=f[i];
            i++;
        }
        return ans%M;
    }
};
