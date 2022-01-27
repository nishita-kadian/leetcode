//DETECT CAPITAL -> 01/27/2022 23:22
//https://leetcode.com/problems/detect-capital/submissions/
class Solution {
public:
    bool detectCapitalUse(string word) {
        int capital = 0;
        int not_capital = 0;
        int size = word.size();
        for(int i = 0 ; i < size ; i++){
            if(word[i]>=65 && word[i]<=90)
                capital++;
            else if(word[i]>=97 && word[i]<=122)
                not_capital++;
        }
        if(capital==size)
            return true;
        if(not_capital==size)
            return true;
        if(capital==1 && word[0]>=65 && word[0]<=90)
            return true;
        
        return false;
    }
};
