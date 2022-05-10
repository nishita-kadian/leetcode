//COMBINATION SUM III -> 05/10/2022 22:59
//https://leetcode.com/problems/combination-sum-iii/submissions/
class Solution {
public:
    vector<vector<int>>ans;
    void backtrack(int currNum,int k,int n,int &currSum,vector<int> &v){
        if((currSum>n || currSum<n) && v.size()==k)
            return;
        if(currSum==n && v.size()==k){
            ans.push_back(v);
            return;
        }
        for(int i = currNum ; i < 10 ; i++){
            currSum += i;
            v.push_back(i);
            backtrack(i+1,k,n,currSum,v);
            currSum -= i;
            v.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        int currSum = 0;
        vector<int> v;
        backtrack(1,k,n,currSum,v);
        return ans;
    }
};
