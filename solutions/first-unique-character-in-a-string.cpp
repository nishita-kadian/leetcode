//FIRST UNIQUE CHARACTER IN A STRING -> 11/15/2021 09:31
//https://leetcode.com/problems/first-unique-character-in-a-string/submissions/
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> m;
        int ans;
        bool x = false;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(m.find(s[i])!=m.end())
            {
                m[s[i]]+=1;
            }
            else
                 m[s[i]]=1;
        }
        
        for(int i = 0; i<s.size();i++)
        {
            if(m[s[i]]==1)
            {
                ans = i;
                x = true;
                break;
            }
        }
        if(x == false)
            return -1;
        else
            return ans;
    }
};
