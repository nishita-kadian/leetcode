//IS SUBSEQUENCE -> 07/08/2022 14:11
//https://leetcode.com/problems/is-subsequence/submissions/
class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.empty())
            return true;
        if(s.size()>t.size())
            return false;
        int i =0;
        int j =0;
        while(i<s.size() && j<t.size()){
            if(s[i]==t[j]){
                i++;
                j++;
            }
            else
                j++;
            
            if(i==s.size())
                return true;
        }
        return false;
    }
};
