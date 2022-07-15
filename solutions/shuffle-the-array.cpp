//SHUFFLE THE ARRAY -> 12/19/2020 22:47
//https://leetcode.com/problems/shuffle-the-array/submissions/
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        int b=nums.size()/2;
        int j=0;
        vector<int>out(nums.size());
        for(int i=0;i<2*b;i=i+2)
        {
            out[i]=nums[j];
            j++;
            
        }
        for(int k=1;k<2*b;k=k+2)
        {
            out[k]=nums[j];
            j++;
        }
        
       return out;
    }
};
