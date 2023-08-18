class Solution {
public:
    int singleNumber(vector<int>& nums) {
        vector<int> bits(32,0);
        for(int i = 0;i < nums.size();i++){
            for(int j = 0;j < 32;j++){
                bits[j]+= nums[i]&1;
                nums[i] = nums[i]>>1;         
            }
        }
        int ans = 0;
        for(int i = 0;i < 32;i++){
            ans = ans + (bits[i]%3)*(1<<i);
        }
        return ans;
    }
};