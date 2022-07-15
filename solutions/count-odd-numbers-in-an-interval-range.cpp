//COUNT ODD NUMBERS IN AN INTERVAL RANGE -> 04/19/2022 18:21
//https://leetcode.com/problems/count-odd-numbers-in-an-interval-range/submissions/
class Solution {
public:
    int countOdds(int low, int high) {
        int count =0;
        if(low!=high && low%2==0){
            low++;  
            count = (high-low)/2;
            count++;
        }
        else if(low!=high && low%2!=0){
            count = (high - low)/2;
            count++;
        }
        else if(low==high){
            if(low%2==0)
                return 0;
            else
                return 1;
        }
        return count;
    }
};
