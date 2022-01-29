//REVERSE STRING -> 01/29/2022 20:59
//https://leetcode.com/problems/reverse-string/submissions/
class Solution {
public:
    void solve(vector<char>& s,int l,int i){
        if(i>=l)
            return;
        swap(s[i],s[l]);
        i++;
        l--;
        solve(s,l,i);
        return;
    }
    void reverseString(vector<char>& s) {
        solve(s,s.size()-1,0);
        return;
    }
};
