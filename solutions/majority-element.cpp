//MAJORITY ELEMENT -> 02/21/2022 09:14
//https://leetcode.com/problems/majority-element/submissions/
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        int ans = 0;
        int size = nums.size();
        for(int i = 0 ; i <size ; i++){
            if(m.find(nums[i])!=m.end())
                m[nums[i]]++;
            else
                m[nums[i]] = 1;
        }
        for(auto it  = m.begin(); it!=m.end();it++){
            if(it->second > (size/2))
                ans = it->first;
        }
        return ans;
    }
};
