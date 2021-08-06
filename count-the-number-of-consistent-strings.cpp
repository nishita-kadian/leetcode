//COUNT THE NUMBER OF CONSISTENT STRINGS -> 08/06/2021 09:15
//https://leetcode.com/problems/count-the-number-of-consistent-strings/submissions/
class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        map<char,int> m;
        bool x = true;
        int count=0;
        for(int i=0;i<allowed.length();i++)
        {
            if(m.find(allowed[i])!=m.end())
            {
                m[allowed[i]] += 1;
                
            }
            else
            {
                m[allowed[i]] = 1;
            }
        }
        for(int i = 0;i<words.size();i++){
            x =true;
            for(int j=0;j<words[i].length();j++)
            {
                if(m.find(words[i][j])!=m.end())
                {
                    continue;
                }
                else
                {
                    x =false;
                    break;
                }
            }
            if(x == true)
            {
                count++;
            }
            
        }
      return count;  
    }
};
