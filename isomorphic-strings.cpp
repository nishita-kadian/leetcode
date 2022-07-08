//ISOMORPHIC STRINGS -> 07/08/2022 14:10
//https://leetcode.com/problems/isomorphic-strings/submissions/
class Solution {
public:
    bool helper(string &s, string &t){
       map<char,char> m;
        for(int i = 0 ; i < s.length() ;i++){
            if(m.find(s[i])!=m.end()){
                if(m[s[i]]!=t[i])
                    return false;
            }
            else{
                m[s[i]] = t[i];
            }
        }
        return true;  
    }
    bool isIsomorphic(string s, string t) {
       return helper(s,t) && helper(t,s);
    }
};
