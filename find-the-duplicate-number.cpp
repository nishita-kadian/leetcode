//FIND THE DUPLICATE NUMBER -> 03/06/2022 21:55
//https://leetcode.com/problems/find-the-duplicate-number/submissions/
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
      for(int i = 0 ; i < nums.size() ; i++){
          int index = abs(nums[i]);
          nums[index] *= -1;
          if(nums[index] > 0)
              return abs(nums[i]);
      }
        return 0;
    }
};
