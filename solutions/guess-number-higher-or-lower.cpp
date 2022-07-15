//GUESS NUMBER HIGHER OR LOWER -> 07/10/2021 11:43
//https://leetcode.com/problems/guess-number-higher-or-lower/submissions/
/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return       -1 if num is lower than the guess number
 *                1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        long int low = 1;
        long int high = n;
        long int mid = (high + low)/2;
        while(low <= high)
        {
            long int temp = guess(mid);
            if(temp == -1)
            {
                high = mid - 1;
                mid = (low + high)/2;
            }
            if(temp == 1)
            {
                low = mid + 1;
                mid = (low + high)/2;
                
            }
            if(temp == 0)
            {
                break;
            }
            
        }
        return mid;
        
    }
};
