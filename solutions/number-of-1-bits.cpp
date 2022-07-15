//NUMBER OF 1 BITS -> 05/26/2022 09:59
//https://leetcode.com/problems/number-of-1-bits/submissions/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0)
        {
            if(n&1==1)
            {
                count++;
            }
            n = n>>1;
        
        }
        return count;
    }
};
