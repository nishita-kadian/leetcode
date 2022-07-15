//MAKE THE STRING GREAT -> 04/25/2021 11:53
//https://leetcode.com/problems/make-the-string-great/submissions/
class Solution {
public:
    string makeGood(string s) {
        string f = "";
        int n = s.size();
        stack<char> stk;
        for(int i = 0 ; i <n ; i++)
        {
            if(stk.empty())
            {
                stk.push(s[i]);
            }
            else if(stk.empty()==false && (stk.top() == s[i]+32 || stk.top() ==s[i]-32))
            {   
                stk.pop();        
            }
            else if(stk.empty()==false && (stk.top() != s[i]+32 || stk.top() !=s[i]-32) )
            {
                stk.push(s[i]);
            }    
        }
        int x = stk.size();
        for(int i = 0 ; i<x ;i++)
        {
            f = f + stk.top();
            stk.pop();
        }
        reverse(f.begin(),f.end());
        return f;
            
        
    }
};
