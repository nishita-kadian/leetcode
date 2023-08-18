class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        //vector<int> prefix;
        int sum = 0;
        int ans = 0;
        unordered_map<int,int> sumFreq;
        sumFreq[sum] = 1;
        for(int i = 0;i<nums.size();i++){
            sum+=nums[i];
            int find = sum - k;
            if(sumFreq.find(find)!=sumFreq.end()){
                ans+=sumFreq[find];
            }
            sumFreq[sum]++;
        }
        return ans;
    }
};