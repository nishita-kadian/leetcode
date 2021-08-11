//NUMBER OF STEPS TO REDUCE A NUMBER TO ZERO -> 08/11/2021 14:05
//https://leetcode.com/problems/number-of-steps-to-reduce-a-number-to-zero/submissions/
class Solution {
public:
   
    int numberOfSteps(int num) {
        long int count=0;
        if(num==0)
        {
            return 0;
        }
        while(num != 0)
        {
            if(num%2==0)
            {
                num = num >> 1;
                count = count + 1;
            }
            else
            {
                num = num >> 1;
                count = count + 2;
            }
        }
        
       return count-1; 
    }
};
