//LONGEST SUBSTRING WITHOUT REPEATING CHARACTERS -> 06/10/2022 08:09
//https://leetcode.com/problems/longest-substring-without-repeating-characters/submissions/
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int lengthSubstr = INT_MIN;
        set<char> sc;
        int currSubstr = 0;
        for(int i = 0 ; i < s.size() ; i++){
            for(int j = i ; j < s.size() ; j++){
                if(sc.empty()){
                    sc.insert(s[j]);
                    currSubstr++;
                }
                else
                {
                    if(sc.find(s[j])!=sc.end()){
                        sc.clear();
                        lengthSubstr=max(lengthSubstr,currSubstr);
                        currSubstr = 0;
                        break;
                    }
                    else
                    {
                        currSubstr++;
                        sc.insert(s[j]);
                    }
                }
            }
        }
        return max(lengthSubstr,currSubstr);
    }
};
