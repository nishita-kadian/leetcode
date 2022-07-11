//LONGEST INCREASING SUBSEQUENCE -> 07/11/2022 22:03
//https://leetcode.com/problems/longest-increasing-subsequence/submissions/
class Solution {
public:
    unordered_map<string,int> cache;
    int dp(int index, vector<int> &nums){
        if(index >= nums.size())
            return 0;
        
        stringstream ss;
        ss << index;
        string key = ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        
        int ans = 0;
        for(int i = index+1;i < nums.size();i++){
            if(nums[i] > nums[index]){
                ans = max(ans, 1 + dp(i, nums));  
            }
        }
        return cache[key] = ans;
    }
    int bu(vector<int> &nums){
        if(nums.size()==0) return 0;
        int n=nums.size();
        vector<int> dp(n);
        for(int i=0;i<n;i++)
           dp[i] =1;
        for(int i=1;i<n;i++)    
          { for(int j = 0;j<i;j++)      
               if(nums[i]>nums[j]&&dp[i]<dp[j]+1) 
                   dp[i]=dp[j]+1;
          }     
        return *max_element(dp.begin(),dp.end()); 
    }
    
    int lengthOfLIS(vector<int>& nums) {
        // int answer = 0;
        // for(int i = 0;i < nums.size();++i)
        //     answer = max(answer, dp(i,nums));
        // return answer + 1;
        return bu(nums);
        
    }
};
