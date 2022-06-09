//TWO SUM II INPUT ARRAY IS SORTED -> 06/09/2022 22:47
//https://leetcode.com/problems/two-sum-ii-input-array-is-sorted/submissions/
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans(2);
        int i =0;
        int j =numbers.size()-1;
        while(j>i){
            int x = target - numbers[i];
            if(numbers[j]==x){
                ans[0] = i+1;
                ans[1] = j+1;
                break;
            }
            if(numbers[j]<x)
                i++;
            if(numbers[j]>x)
                j--;
            
            
        }
        return ans;
    }
};
