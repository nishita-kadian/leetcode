//PARSING A BOOLEAN EXPRESSION -> 11/09/2021 11:54
//https://leetcode.com/problems/parsing-a-boolean-expression/submissions/
class Solution {
public:
    bool parseBoolExpr(string expression) {
        string s  = expression;
        int tr = 0;
        int fa = 0;
        char temp;
        bool ans ;
        stack<char> st;
        int i = 0;
        while(i < s.size())
        {
            // cout << st.size();
            // if(st.size() > 0)
            //     cout << " " << st.top() << endl;
            // else
            //     cout << endl;
            
            if(s[i]==','){
                i++;
                continue;
            }
            
            if(s[i] == ')' && !st.empty()){
                while(st.top()!='(' )
                {
                    if(st.top()=='t'){
                        tr++;
                        st.pop();
                    }
                    if(st.top()=='f'){
                        fa++;
                        st.pop();
                    }
                }
                st.pop();
                temp = st.top();
                st.pop();
                if(temp == '&')
                {
                    if(fa>=1)
                        st.push('f');
                    else
                        st.push('t');
                }
                if(temp == '|')
                {
                    if(tr>=1)
                        st.push('t');
                    else
                        st.push('f');
                }
                if(temp == '!')
                {
                    if(tr==1)
                        st.push('f');
                    else 
                        st.push('t');
                }
                tr=0;
                fa=0;
            }
            else
                st.push(s[i]);
            i++;
        }
        temp =  st.top();
        st.pop();
        if(temp == 't')
           ans = true ;
        else if(temp=='f')
            ans = false;
        
        return ans;
    }
};
