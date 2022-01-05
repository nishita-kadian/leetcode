//SHUFFLE STRING -> 01/05/2022 14:47
//https://leetcode.com/problems/shuffle-string/submissions/
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
    string ans = s;
    for(int i = 0 ; i < indices.size() ; i++){
        ans[indices[i]] = s[i];
    }
        return ans;
    }
};
