//MAXIMUM NUMBER OF WORDS FOUND IN SENTENCES -> 01/01/2022 22:47
//https://leetcode.com/problems/maximum-number-of-words-found-in-sentences/submissions/
class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int number = INT_MIN;
        for(int i = 0 ; i < sentences.size() ;i++){
            int spaces = 0 ;
            for(int j = 0 ; j < sentences[i].size() ; j++){
                if(sentences[i][j] == ' ')
                    spaces++;
            }
            number = max(number,spaces+1);
        }
        return number;
    }
};
