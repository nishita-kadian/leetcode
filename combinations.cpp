//COMBINATIONS -> 02/23/2022 11:08
//https://leetcode.com/problems/combinations/submissions/
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(int index, int k,int n,vector<int> &v){
        if(v.size()==k){
            ans.push_back(v);
            return;
        }
        for(int i = index ; i <= n ; i++){
            v.push_back(i);
            backtrack(i+1,k,n,v);
            v.pop_back();
        }
        return;
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> v;
        backtrack(1,k,n,v);
        return ans;
    }
};
