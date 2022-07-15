//BACKSPACE STRING COMPARE -> 04/24/2021 13:21
//https://leetcode.com/problems/backspace-string-compare/submissions/
class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> stk1;
        stack<char> stk2;
        for(int i = 0; i < s.size() ; i++)
        {
            if(stk1.empty() && s[i]!= '#')
            {
                stk1.push(s[i]);
            }
            else  if(s[i]>=97 && s[i]<=122)
            {
                stk1.push(s[i]);
            }
            else if(s[i] == '#' && stk1.empty()==false)
            {
                stk1.pop();
            }
        }
        
        for(int i = 0; i < t.size() ; i++)
        {
            if(stk2.empty() && t[i]!= '#')
            {
                stk2.push(t[i]);
            }
            else  if(t[i]>=97 && t[i]<=122)
            {
                stk2.push(t[i]);
            }
            else if(t[i] = '#' && stk2.empty()==false)
            {
                stk2.pop();
            }
        }
        int size1 =stk1.size();
        int size2 = stk2.size();
        if(size1!=size2)
        {
            return false;
        }
        else
        {
            for(int j = 0 ; j < size1 ; j++)
            {
                if(stk1.top()==stk2.top())
                {
                    stk1.pop();
                    stk2.pop();
                }
                else
                {
                    return false;
                }
            }
            return true;

        }
    }
};
