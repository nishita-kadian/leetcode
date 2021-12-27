//MINIMUM ADD TO MAKE PARENTHESES VALID -> 12/27/2021 13:56
//https://leetcode.com/problems/minimum-add-to-make-parentheses-valid/submissions/
class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<int> st;
        for(int i = 0 ; i < s.size() ; i++){
            if(!st.empty() && st.top()=='(' && s[i] == ')'){
                st.pop();
            }
            else
                st.push(s[i]);
        }
        int ans = st.size();
        return ans;
    }
};
