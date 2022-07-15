//REMOVE OUTERMOST PARENTHESES -> 04/25/2021 15:34
//https://leetcode.com/problems/remove-outermost-parentheses/submissions/
class Solution {
public:
    string removeOuterParentheses(string S) {
        string k ="";
        stack<char> stk;
        for(int i = 0 ; i < S.size() ; i++)
        {
            if(S[i] == '(' && stk.empty())
            {
                stk.push(S[i]);
                
            }
            else if(S[i] == '(' )
            {
                stk.push(S[i]);
                k=k+S[i];
                
            }
           
            else if(S[i]==')' && stk.empty()==false)
            {
                k = k + S[i];
                stk.pop();
                
                if(stk.empty())
                {
                    k.pop_back();
                   
                }
            }
                
        }
        
        return k;
        
    }
};
