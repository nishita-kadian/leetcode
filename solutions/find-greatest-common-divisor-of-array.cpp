//FIND GREATEST COMMON DIVISOR OF ARRAY -> 01/16/2022 13:45
//https://leetcode.com/problems/find-greatest-common-divisor-of-array/submissions/
class Solution {
public:
    int findGCD(vector<int>& nums) {
     int ans  = INT_MIN ;
        int maxi = *max_element(nums.begin(),nums.end());
        int mini = *min_element(nums.begin(),nums.end());
        if(maxi%mini==0)
            return mini;
        else{
            for(int i = 1 ; i < mini ; i++ ){
                if(maxi%i==0 && mini%i==0)
                    ans = max(ans,i);
            }
        }
        // cout<<ans;
        return ans;
    }
};
