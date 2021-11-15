//RANSOM NOTE -> 11/15/2021 09:31
//https://leetcode.com/problems/ransom-note/submissions/
class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        bool ans;
        unordered_map<char,int> x;
        unordered_map<char,int> y;
        for(int i = 0 ; i < magazine.size() ; i++)
        {
             if(x.find(magazine[i])!=x.end())
                x[magazine[i]]+=1;
            else
                x[magazine[i]]=1;
        }
        for(int i = 0 ; i < ransomNote.size() ; i++)
        {
             if(y.find(ransomNote[i])!=y.end())
                y[ransomNote[i]]+=1;
            else
                y[ransomNote[i]]=1;
        }
        
        for(auto it = y.begin();it!=y.end();it++)
        {
            if(x.find(it->first)!=x.end())
            {
               if(it->second<=x[it->first])
               {
                   ans = true;
               }
                else
                {
                    ans = false;
                    break;
                }
            }
            else
            {
                ans = false;
                break;
            }
        }
    return ans;
    }
};
