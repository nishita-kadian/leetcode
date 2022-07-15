//COMBINATION SUM -> 02/24/2022 10:46
//https://leetcode.com/problems/combination-sum/submissions/
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int currIndex,int target,int currSum,vector<int> &currComb, vector<int> &candidates){
        if(currSum>target)
            return;
        if(currSum==target){
            ans.push_back(currComb);
            return;
        }
        for(int  i = currIndex ; i < candidates.size() ;i++){
            currComb.push_back(candidates[i]);
            currSum+=candidates[i];
            backtrack(i,target,currSum,currComb,candidates);
            currComb.pop_back();
            currSum-=candidates[i];
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> currComb;
        int currSum = 0;
        backtrack(0,target,0,currComb,candidates);
        return ans;
    }
};
