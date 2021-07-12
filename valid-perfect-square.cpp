//VALID PERFECT SQUARE -> 07/12/2021 23:09
//https://leetcode.com/problems/valid-perfect-square/submissions/
class Solution {
public:
    bool isPerfectSquare(int num) {
        long int low = 0;
        long int high = num;
        long int mid = (low+high)/2;
        bool x = false;
        if(num==1)
        {
            x = true;
            return x;
        }
        while(low<=high)
        {
            if(mid*mid==num)
            {
                x = true;
                break;
            }
            else if(mid*mid > num)
            {
                high = mid - 1;
                mid  = (low+high)/2;
                
            }
            else if(mid*mid < num)
            {
                low = mid+1;
                mid = (low+high)/2;
            }
        }
       return x;
    }
};
