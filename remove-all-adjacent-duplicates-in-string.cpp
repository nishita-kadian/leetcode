//REMOVE ALL ADJACENT DUPLICATES IN STRING -> 04/24/2021 10:20
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string/submissions/
class Solution {
public:
    string removeDuplicates(string S) {
        string s = "";
        stack<char> stk;
        for(int i = 0 ; i < S.size() ; i++)
        {
            if(stk.empty())
            {
                stk.push(S[i]);
            }
            else if(stk.top() == S[i])
            {
                stk.pop();
            }
            else if(stk.top() != S[i])
            {
                stk.push(S[i]);
            }
        }
        int j = stk.size();
        for(int i = 0 ; i < j ; i++ )
        {
            s += stk.top();
            stk.pop();
        }
        reverse(s.begin(),s.end());
        return s;
        
        
    }
};
