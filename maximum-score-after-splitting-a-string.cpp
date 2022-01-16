//MAXIMUM SCORE AFTER SPLITTING A STRING -> 01/16/2022 12:27
//https://leetcode.com/problems/maximum-score-after-splitting-a-string/submissions/
class Solution {
public:
    int maxScore(string s) {
        int i = 1;
        int score = INT_MIN;
        while(i < s.length()){
            int zero = 0;
            int one = 0;
            string g = s.substr(0,i);
            string h = s.substr(i,s.length()-i);
            for(int j = 0 ; j < g.length() ; j++){
                if(g[j]=='0')
                    zero++;
            }
            for(int j = 0 ; j < h.length() ; j++){
                if(h[j]=='1')
                    one++;
            }
            score = max(score,one + zero);
            i++;
        }
        return score;
    }
};
