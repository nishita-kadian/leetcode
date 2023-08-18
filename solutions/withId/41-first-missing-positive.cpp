class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n = nums.size();
        for(int i = 0 ; i < n ;){
            if(nums[i]<=0 || nums[i]>n){
                i++;
                continue;
            }
            else{
                if(nums[i]!=(i+1) && nums[i]!=nums[nums[i]-1])
                    swap(nums[i], nums[nums[i]-1]);
                else
                    i++;
            }
        }
        for(int i = 0;i<n;i++){
            if(nums[i]!=i+1)
                return i+1;
        }
        return nums.size()+1;
  
    }
};