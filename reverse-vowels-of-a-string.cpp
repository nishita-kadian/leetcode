//REVERSE VOWELS OF A STRING -> 01/21/2022 00:05
//https://leetcode.com/problems/reverse-vowels-of-a-string/submissions/
class Solution {
public:
    bool isVowel(char x){
        if(x=='a' || x=='e' || x=='i' || x=='o' || x=='u' || x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
            return true;
        return false;
    }
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        while(j>i){
            if(isVowel(s[i]) && isVowel(s[j])){
                swap(s[i],s[j]);
                i++;
                j--;
            }
            else if(isVowel(s[i]) && isVowel(s[j])==false)
                j--;
            else if(isVowel(s[i])==false && isVowel(s[j]))
                i++;
            else{
                i++;
                j--;
            }
        }
        return s;
    }
};
