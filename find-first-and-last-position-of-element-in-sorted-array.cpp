//FIND FIRST AND LAST POSITION OF ELEMENT IN SORTED ARRAY -> 01/21/2022 23:19
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/submissions/
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
     vector<int> ans;
        if(binary_search(nums.begin(),nums.end(),target)){
        vector<int>::iterator it = lower_bound(nums.begin(),nums.end(),target);
        vector<int>::iterator j = upper_bound(nums.begin(),nums.end(),target);
        int x = distance(nums.begin(),it);
        int y = distance(nums.begin(),j);
        ans.push_back(x);
        ans.push_back(y-1);
        }
        else{
            ans.push_back(-1);
            ans.push_back(-1);
        }
        return ans;
    }
};
