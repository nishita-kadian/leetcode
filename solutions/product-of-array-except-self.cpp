//PRODUCT OF ARRAY EXCEPT SELF -> 12/19/2021 22:52
//https://leetcode.com/problems/product-of-array-except-self/submissions/
class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int product = 1;
        vector<int> ans(nums.size(),0);
        vector<int> zeros;
        bool zero = false; 
        for(int i = 0 ; i < nums.size() ; i++){
            if(nums[i]==0)
                zeros.push_back(i);
            else
                product *= nums[i];
        }
        if(zeros.size()==nums.size())
            return ans;
        if(zeros.size()>1)
            return ans;
        if(zeros.size()!=0)
            zero = true;
        
        if(zero == true){
            for(int i = 0 ; i < zeros.size() ; i++){
                ans[zeros[i]] = product;
            }
        }
        else
        {
            for(int i = 0 ; i < nums.size() ; i++){
                ans[i] = product/nums[i];
            }
        }
        return ans;
    }
};
