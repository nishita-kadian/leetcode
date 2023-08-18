class Solution {
public:
    //distinct bits at an index, multiplying it will give you the answer
    int totalHammingDistance(vector<int>& nums) {
        vector<int> ones(32,0);
        vector<int> zeros(32,0);
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<32;j++){
                if((nums[i]>>j)&1 == 1)
                    ones[j]++;
                else
                    zeros[j]++;
            }
        }
        int ans = 0;
        for(int i = 0;i<32;i++){
            ans+=ones[i]*zeros[i];
        }
        return ans;
    }
};