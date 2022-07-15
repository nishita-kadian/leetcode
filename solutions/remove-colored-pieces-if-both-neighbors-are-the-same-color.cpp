//REMOVE COLORED PIECES IF BOTH NEIGHBORS ARE THE SAME COLOR -> 02/20/2022 00:56
//https://leetcode.com/problems/remove-colored-pieces-if-both-neighbors-are-the-same-color/submissions/
class Solution {
public:
    bool winnerOfGame(string colors){
        if(colors.size()<=2)
            return false;
        int a = 0 ;
        int b = 0 ;
        for(int i = 1 ; i < colors.size()-1 ; i++){
            if(colors[i-1]==colors[i] && colors[i]==colors[i+1]){
                if(colors[i]=='A')
                    a++;
                else
                    b++;
            }
        }
        return a>b;
    }
};
