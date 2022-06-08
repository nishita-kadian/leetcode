//REMOVE PALINDROMIC SUBSEQUENCES -> 06/08/2022 19:14
//https://leetcode.com/problems/remove-palindromic-subsequences/submissions/
class Solution {
public:
    int removePalindromeSub(string s) {
        string t = s;
        reverse(t.begin(),t.end());
        if(t==s)
            return 1;
        else
            return 2;
    }
};
