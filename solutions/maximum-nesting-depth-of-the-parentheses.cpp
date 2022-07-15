//MAXIMUM NESTING DEPTH OF THE PARENTHESES -> 08/08/2021 23:38
//https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/submissions/
class Solution {
public:
    int maxDepth(string s) {
    stack<char> stk;
        int count  = 0;
        vector<int> v;
    for(int i = 0 ; i < s.length() ; i++ )
    {
        if( s[i] == '(' )
        {
            stk.push(s[i]);
        
        }
        else if( s[i] == ')' && !stk.empty() )
        {
            
            int size = stk.size();
            count = max(count,size);
            stk.pop();
        }    
    }
     return count;   
    }
};
