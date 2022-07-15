//HOW MANY NUMBERS ARE SMALLER THAN THE CURRENT NUMBER -> 12/20/2020 16:13
//https://leetcode.com/problems/how-many-numbers-are-smaller-than-the-current-number/submissions/
class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        
        vector<int>out(nums.size());
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            for(int j=0;j<nums.size();j++)
            {
                
                if(j!=i && nums[i]>nums[j])
                {
                    count++;
                }
                
            }
            out[i]=count;
        }
        return out;
    }
};
