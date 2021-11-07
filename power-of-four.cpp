//POWER OF FOUR -> 11/07/2021 09:03
//https://leetcode.com/problems/power-of-four/submissions/
class Solution {
public:
    bool isPowerOfFour(int n) {
        if(n == 4 || n == 1)
            return true;
        if(n%4==0 && n!=0)
            return isPowerOfFour(n/4);
        return false;
    }
};
