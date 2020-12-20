//XOR OPERATION IN AN ARRAY -> 12/20/2020 17:31
//https://leetcode.com/problems/xor-operation-in-an-array/submissions/
class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int>nums(n);
        for(int i=0;i<n;i++)
        {
            nums[i]=start+2*i;
        }
        if(n==1)
        {
            return start;
        }
        else
        {int d=nums[0]^nums[1];
        for(int i=2;i<n;i++)
        {
            d=d^nums[i];
        }
        return d;
        }
    }
};
