//ARRANGING COINS -> 07/14/2021 17:49
//https://leetcode.com/problems/arranging-coins/submissions/
class Solution {
public:
    int arrangeCoins(int n) {
        
        int count = 0;
        for(int i = 1 ; ;i++)
        {
            n=n-i;
            if(n>=0)
            {
                count++;
            }
            else
            {
                break;
            }
            
        }
        return count;
    }
};
