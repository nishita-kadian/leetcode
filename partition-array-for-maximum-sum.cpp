//PARTITION ARRAY FOR MAXIMUM SUM -> 07/07/2022 22:55
//https://leetcode.com/problems/partition-array-for-maximum-sum/submissions/
class Solution {
public:

    unordered_map<int,int> cache;
    int dp(int index,int &k,vector<int>& arr){
        if(index==arr.size())
            return 0;
        if(cache.find(index)!=cache.end())
            return cache[index];
        int len = 0;
        int maxi =INT_MIN;
        int maxAns = INT_MIN;
        for(int i = index;i < index+k && i<arr.size();i++){
            len++;
            maxi = max(maxi,arr[i]);
            int sum = len*maxi + dp(i+1,k,arr);
            maxAns = max(maxAns,sum);
        }
        return cache[index] = maxAns;
        
    }
    
         int maxSumAfterPartitioning(vector<int>& arr, int k) {
             return dp(0,k,arr);
    }
};

