//HOUSE ROBBER II -> 07/06/2022 23:01
//https://leetcode.com/problems/house-robber-ii/submissions/
class Solution {
public:
    unordered_map<string,int> cache;
    int dp(int index,bool first,bool &taken,vector<int> & nums){
        if(first==true && taken==true){
            if(index==nums.size()-1)
                return 0;
        }
        else{
            if(index==nums.size()-1)
                return nums[index];
        }
        if(index>=nums.size())
            return 0;
        stringstream ss;
        ss<<index<<'-'<<first;
        string key =ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        else
            return cache[key] = max(dp(index+2,first,taken,nums)+nums[index],dp(index+1,first,taken,nums));
    }
    int rob(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        if(nums.size()==1)
            return nums[0];
        if(nums.size()==2)
            return max(nums[0],nums[1]);
        int ans = INT_MIN;
        bool taken = true;
        // int ind1 = 0;
        // int ind2=1;
        ans = (max(dp(0,true,taken,nums),dp(1,false,taken,nums)));
        taken = false;
        ans = max(ans,max(dp(0,true,taken,nums),dp(1,false,taken,nums)));
        return ans;
    }
};
