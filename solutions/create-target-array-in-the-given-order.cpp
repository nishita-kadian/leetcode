//CREATE TARGET ARRAY IN THE GIVEN ORDER -> 12/20/2020 16:26
//https://leetcode.com/problems/create-target-array-in-the-given-order/submissions/
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
    vector<int>target;
    for(int i=0;i<nums.size();i++)
    {
            int a=nums[i];
            int b=index[i];
            target.insert(target.begin()+b,a);
        
    }
        return target;
    }
};
