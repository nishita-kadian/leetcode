//CHECK IF THE SENTENCE IS PANGRAM -> 07/20/2021 20:10
//https://leetcode.com/problems/check-if-the-sentence-is-pangram/submissions/
class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char,int> m;
        if(sentence.length()>=26)
        {
            for(int i = 0 ; i < sentence.length() ; i++)
            {
                if(m.find(sentence[i])!=m.end())
                {
                    m[sentence[i]]++;
                }
                else
                {
                    m[sentence[i]] = 1;
                }
            }
            if(m.size()==26)
        {
            return true;
        }
        else
            return false;
        }
        
        
        return false;
        
    }
};
