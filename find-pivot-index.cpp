//FIND PIVOT INDEX -> 07/08/2022 14:09
//https://leetcode.com/problems/find-pivot-index/submissions/
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        for(int i = 0 ; i < nums.size() ; i++){
            sum+=nums[i];
        }    
        int left = 0;
        int right = sum;
        for(int i = 0 ; i < nums.size() ; i++){
            right-=nums[i];
            if(left==right)
                return i;
            left+=nums[i];
           
            
        }
        return -1;
    }
};
