//FIND NUMBERS WITH EVEN NUMBER OF DIGITS -> 07/12/2021 12:43
//https://leetcode.com/problems/find-numbers-with-even-number-of-digits/submissions/
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        
        int even=0;
        for(int i=0;i<nums.size();i++)
        {
            int count=0;
            int x=nums[i];
            while(x!=0)
            {
                x=x/10;
                count++;
            }
            if(count%2==0)
            {
                even++;
            }
          
        }
        return even;
    }
};
