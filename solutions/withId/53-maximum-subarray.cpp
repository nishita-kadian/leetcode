class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int start = 0;
        int end = 0;
        int sum = 0;
        int ans = INT_MIN;
        while(end < nums.size()){
            sum+=nums[end];
            end++;
            ans = max(ans,sum);
            if(sum <= 0){
                start = end;
                sum = 0;
            }
        }
        return ans;
    }
};