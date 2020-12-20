//DECOMPRESS RUN LENGTH ENCODED LIST -> 12/20/2020 13:09
//https://leetcode.com/problems/decompress-run-length-encoded-list/submissions/
class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        int f,v;
        int b=0;
        vector<int>out;
        for(int i=0;i<nums.size();i=i+2)
        {
            f=nums[i];
            v=nums[i+1];
            for(int j=1;j<=f;j++)
            {
                out.push_back(v);
                
                
            }
        
        }
        return out;
    }
};
