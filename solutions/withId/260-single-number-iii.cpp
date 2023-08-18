class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int aXORb = 0;
        for(int i = 0;i<nums.size();i++){
            aXORb ^= nums[i];
        }
        
        int shift = 0;
        while((aXORb&1)==0){
            shift++;
            aXORb = aXORb>>1;
        }
        int num1=0;
        int num2=0;
        int number = (1<<shift);
        for(int i =0 ; i<nums.size() ; i++){
            if((nums[i]&number) == 0)
                num1 ^= nums[i];
            else
                num2 ^= nums[i];
        }
        vector<int> ans(2);
        ans[0] = num1;
        ans[1] = num2;
        return ans;
    }
};