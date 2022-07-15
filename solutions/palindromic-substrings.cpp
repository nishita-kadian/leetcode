//PALINDROMIC SUBSTRINGS -> 05/22/2022 11:33
//https://leetcode.com/problems/palindromic-substrings/submissions/
class Solution {
public:
    int countSubstrings(string s) {
        int j = 2;
        int palindromes = s.size();
        while(j<=s.size()){
            for(int i = 0 ; i <= s.size()- j ; i++){
                string g = s.substr(i,j);
                string h = g;
                reverse(h.begin(),h.end());
                if(g==h)
                    palindromes++;
            }
            j++;
        }
        return palindromes;
    }
};
