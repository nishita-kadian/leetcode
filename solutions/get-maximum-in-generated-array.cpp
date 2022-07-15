//GET MAXIMUM IN GENERATED ARRAY -> 03/08/2022 11:49
//https://leetcode.com/problems/get-maximum-in-generated-array/submissions/
class Solution {
public:
    int getMaximumGenerated(int n) {
     vector<int> nums(n+1,0);
        for(int i = 0 ; i < nums.size() ;i++){
            if(i==0 || i==1)
                nums[i] = i;
            else if(i%2==0){
                int x = i/2;
                nums[i] = nums[x];
            }
            else{
                int x = (i-1)/2;
                nums[i] = nums[x]+nums[x+1];
            }
        }
        return *max_element(nums.begin(),nums.end());
    }
};
