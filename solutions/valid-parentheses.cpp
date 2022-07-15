//VALID PARENTHESES -> 03/13/2022 11:41
//https://leetcode.com/problems/valid-parentheses/submissions/
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        int n = s.size();
          if(s[0] ==')' || s[0] == ']' || s[0] == '}') 
            {
                return false;
            }
        for(int i = 0 ; i < n ; i++)
        {
          
            if(stk.size()>0 && stk.top()=='(' && s[i] == ')' )
            {
                stk.pop();
            }
            
            else if(stk.size()>0 && stk.top()=='[' && s[i] == ']' )
            {
                stk.pop();
            }
            
            else if(stk.size()>0 && stk.top()=='{' && s[i] == '}' )
            {
                stk.pop();
            }
            else 
            {
                stk.push(s[i]);                
            }
            
        }
        if(stk.empty()==true)
        {
            return true;
        }
        else 
        {
            return false;
        }
        
        
    }
};
