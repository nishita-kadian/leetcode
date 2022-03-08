//COUNT COMMON WORDS WITH ONE OCCURRENCE -> 03/08/2022 17:25
//https://leetcode.com/problems/count-common-words-with-one-occurrence/submissions/
class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> m1;
        unordered_map<string,int> m2;
        int count = 0;
        for(int i = 0;i<words1.size();i++){
            if(m1.find(words1[i])!=m1.end())
                m1[words1[i]]++;
            else
                m1[words1[i]]=1;
        }
        for(int i =0;i<words2.size();i++){
            if(m2.find(words2[i])!=m2.end())
                m2[words2[i]]++;
            else
                m2[words2[i]]=1;
        }
        for(auto i = m2.begin() ; i!= m2.end();i++){
            if(i->second==1){
                if(m1.find(i->first)!=m1.end() && m1[i->first] == 1)
                    count++;
            }
        }
        return count;
    }
};
