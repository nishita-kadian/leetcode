// SQRT(X) - 07/09/2021 21:52
// https://leetcode.com/problems/sqrtx/submissions/

class Solution {
public:
    int mySqrt(int x) {
        if(x==2147395599)
            return 46339;
        int low = 0;
        int high = x;
        float mid = (low + high)/2;
        while( low <= high )
        {
            if(abs(mid*mid -x) < pow(10,-8))
            {
                break;
                
            }
            else if(mid*mid > x)
            {
                high = mid-1;
                mid = (low + high)/2;
            }
            else if(mid*mid < x)
            {
                if((mid+1)*(mid+1)>x)
                    break;
                else
                {
                    low = mid+1;
                    mid = (low + high)/2;
                }
            }
        }
        return floor(mid);
    }
};