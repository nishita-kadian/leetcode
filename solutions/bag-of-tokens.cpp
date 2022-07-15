//BAG OF TOKENS -> 02/20/2022 10:32
//https://leetcode.com/problems/bag-of-tokens/submissions/
class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int score = 0;
        sort(tokens.begin(),tokens.end());
        int i = 0;
        int j = tokens.size()-1;
        while(i<=j && i<tokens.size()){
            if(tokens[i]>power && score==0)
                break;
            else if(tokens[i]<=power){
                power-=tokens[i];
                score++;
                i++;
            }
            else if(tokens[i]>power && score>=1 && i!=j){
                power+=tokens[j];
                score--;
                j--;   
            }
            else
                i++;
        }
        return score;
    }
};
