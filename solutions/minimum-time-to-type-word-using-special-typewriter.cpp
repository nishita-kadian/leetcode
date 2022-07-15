//MINIMUM TIME TO TYPE WORD USING SPECIAL TYPEWRITER -> 02/18/2022 00:50
//https://leetcode.com/problems/minimum-time-to-type-word-using-special-typewriter/submissions/
class Solution {
public:
    int minTimeToType(string word) {
        int count = 0;
        int pos = 0;
        for(int i = 0 ; i < word.length() ; ++i){
            int m1 = abs((word[i] - 'a') - pos);
            int m2 = abs(26 - m1);
            count+=(min(m1,m2)+1);
            pos = word[i]-'a';
        }
        return count;
    }
};
