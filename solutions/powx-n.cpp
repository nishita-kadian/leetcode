// Pow(x, n) -> 07/13/2021 15:41
// https://leetcode.com/problems/powx-n/

class Solution {
public:
    double myPow(double x, int n) {
        if(n<0)
        {
            double answer = myPow(x,-(n+1));
            return 1.0f/(answer*x);
        }
        if(n==0)
            return 1;
        if(n==1)
            return x;
        if(n==2)
            return x*x;
        if(n%2==0)
        {
            double answer = myPow(x,n/2);
            return answer*answer;
        }
        else
            return x*myPow(x,n-1);
    }
};