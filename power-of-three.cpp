//POWER OF THREE -> 11/07/2021 08:59
//https://leetcode.com/problems/power-of-three/submissions/
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n==3 || n==1)
            return true;
        if(n%3==0 && n!=0)
        {
            n = n/3;
            return isPowerOfThree(n);
        }
        return false;
    } 
};
