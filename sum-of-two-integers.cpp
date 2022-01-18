//SUM OF TWO INTEGERS -> 01/18/2022 20:50
//https://leetcode.com/problems/sum-of-two-integers/submissions/
class Solution {
public:
     int getSum(int a, int b) {
        if(a==0)
            return b;
        if(b==0)
            return a;
        int x = log(exp(a)*exp(b));
        return x;
    }
};
