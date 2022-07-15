//SUBTRACT THE PRODUCT AND SUM OF DIGITS OF AN INTEGER -> 04/20/2022 18:42
//https://leetcode.com/problems/subtract-the-product-and-sum-of-digits-of-an-integer/submissions/
class Solution {
public:
    int subtractProductAndSum(int n) {
        int product  = 1;
        int sum = 0 ;
        while(n!=0)
        {
            int a  = n%10;
            product *= a;
            sum += a;
            n = n/10;
            
        }
        return product-sum ;
    }
};
