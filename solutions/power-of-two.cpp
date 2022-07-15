//POWER OF TWO -> 07/20/2021 18:39
//https://leetcode.com/problems/power-of-two/submissions/
class Solution {
public:
    bool isPowerOfTwo(int n) {
        int one = 0;
        vector<int> binary;
        while(n!=0)
        {
            int a = n%2;
            binary.push_back(a);
            n = n/2;
            
        }
        for(int i = 0 ; i<binary.size();i++)
        {
            if(binary[i]==1)
            {
                one++;
            }
        }
        if(one == 1)
        {
            return true;
        }
        else 
            return false;
    }
};
