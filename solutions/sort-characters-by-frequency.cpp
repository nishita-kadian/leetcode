//SORT CHARACTERS BY FREQUENCY -> 03/30/2021 15:28
//https://leetcode.com/problems/sort-characters-by-frequency/submissions/
class Solution {
public:
    map<char,int> m;
    map<int,string> M;
        string x="" ;
        
    
    void sort_(map<char,int> &m)
        {
            for(map<char,int>::iterator it = m.begin();it!=m.end();it++)
            {
                if(M.find(it->second)!=M.end())
                {
                    M[it->second] += it->first;
                }
                else
                {
                    string str(1, it->first);
                    M[it->second] = str;
                }
            }
        }
    string frequencySort(string s) {
        
        
        for(int i=0 ; i < s.length() ; i++ )
        {
            
            if(m.find(s[i]) == m.end())
            {
                m[s[i]]=1;
            }
            else
            {
                m[s[i]]+=1;
            }
            
        }
        
        sort_(m);
        
        for(map<int,string>::reverse_iterator it = M.rbegin();it!=M.rend();it++)
        {
            for(int j = 0;j < it->second.size();++j)
             for(int i = 0 ;i < it->first ;i++)
                x += it->second[j];
        }
        
        return x;
    }
};
