//LONGEST COMMON PREFIX -> 08/29/2021 13:16
//https://leetcode.com/problems/longest-common-prefix/submissions/
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s = strs[0];
        string ans="";
        for(int i = 1 ; i<strs.size();i++)
        {
            
            for(int j = 0; j < s.length() ; j++)
            {
                if(s[j]==strs[i][j])
                    continue;
                else if(s[j]!=strs[i][j] && s[0] == strs[i][0])
                    s = s.substr(0,j);
                else
                    return ans;
            }
                
        }
        return s;
    }
};
