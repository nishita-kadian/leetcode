//COUNT NUMBER OF NICE SUBARRAYS -> 06/16/2022 21:02
//https://leetcode.com/problems/count-number-of-nice-subarrays/submissions/
class Solution {
public:
    
    
//     int j = 0, odd = 0, count = 0, total = 0;
//         for (int i = 0; i < nums.size(); i++) {
//             if (nums[i] & 1) {
//                 odd++;
//                 if (odd >= k) {
//                     count = 1;
//                     while (!(nums[j++] & 1)) count++;
//                     total += count;
//                 }
//             } else if (odd >= k) total += count;
//         }
//         return total;
  int numberOfSubarrays(vector<int>& nums, int k) {
      // int j = 0, odd = 0, count = 0, total = 0;
      //   for (int i = 0; i < nums.size(); i++) {
      //       if (nums[i] & 1) {
      //           odd++;
      //           if (odd >= k) {
      //               count = 1;
      //               while (!(nums[j++] & 1)) count++;
      //               total += count;
      //           }
      //       } else if (odd >= k) total += count;
      //   }
      //   return total;
       int j = 0 , odd = 0 ,count = 0,total = 0;
        for(int i =0;i<nums.size();i++)
        {
            if(nums[i] & 1){
                odd++;
                if(odd>=k){
                    count = 1;
                    while(!(nums[j++] & 1)){
                        count++;
                    }
                    total += count;
                }
            
            }
            else if(odd >= k) 
                total += count;
        }
        return total;
    }
    
};
       
