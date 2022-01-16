//THREE DIVISORS -> 01/16/2022 13:25
//https://leetcode.com/problems/three-divisors/submissions/
class Solution {
public:
    bool isThree(int n) {
        int count = 0;
        for(int i = 1 ; i <= n ; i++){
            if(n%i==0)
                count++; 
            }
        if(count==3)
            return true;
        else
            return false;    
    }
};
