//COUNTING WORDS WITH A GIVEN PREFIX -> 07/07/2022 13:21
//https://leetcode.com/problems/counting-words-with-a-given-prefix/submissions/
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ans = 0;
        int x = pref.size();
        for(int i = 0 ; i < words.size() ; i++){
            string s  = words[i];
            words[i] = s.substr(0,x);
        }
        for(int i = 0 ; i < words.size() ; i++){
            if(words[i]==pref)
                ans++;
        }
        return ans;
    }
};
