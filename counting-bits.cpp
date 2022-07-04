//COUNTING BITS -> 07/04/2022 22:51
//https://leetcode.com/problems/counting-bits/submissions/
class Solution {
public:
    void dp(int index, int &n, vector<int> &ans) {
        if(index > n)
            return;
        else{
            if(index%2==0){
                ans.push_back(ans[index/2]);
                dp(index+1,n,ans);
            }
            else{
                ans.push_back(ans[(index)/2]+1);
                dp(index+1,n,ans);
            }
        }
        return;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        if(n>=0){
            ans.push_back(0);
        }
        if(n==0)
            return ans;
        if(n>=1)
            ans.push_back(1);
        if(n==1)
            return ans;
        dp(2,n,ans);
        return ans;
    }
};
