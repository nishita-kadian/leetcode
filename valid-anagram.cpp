//VALID ANAGRAM -> 11/18/2021 09:41
//https://leetcode.com/problems/valid-anagram/submissions/
class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1;
        unordered_map<char,int> m2;
        bool x = true ;
        for(int i = 0 ; i < s.size() ; i++)
        {
            if(m1.find(s[i])!=m1.end())
                m1[s[i]]+=1;
            else
                m1[s[i]]=1;
        }
        for(int i = 0 ; i < t.size() ; i++)
        {
            if(m2.find(t[i])!=m2.end())
                m2[t[i]]+=1;
            else
                m2[t[i]]=1;
        }
        for(auto it = m2.begin();it!=m2.end();it++)
        {
            cout<<it->first<<" "<<it->second<<endl;
        }
        if(m1.size()==m2.size()){
            for(auto it = m2.begin();it!=m2.end();it++)
            {
                if(m1.find(it->first)!=m1.end())
                {
                    if(it->second != m1[it->first])
                    {
                        x = false;
                        break;
                        
                    }   
                    // else
                    // {
                    //     x = false;
                    //     break;
                    // }
                }
                else
                {
                    x =false;
                    break;
                }
            }
        }
        else
            x = false;
        return x;
    }
};
