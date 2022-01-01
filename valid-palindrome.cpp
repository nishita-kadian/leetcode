//VALID PALINDROME -> 01/01/2022 22:08
//https://leetcode.com/problems/valid-palindrome/submissions/
class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(), ::tolower);
        string str = "";
        for(int i = 0 ; i < s.size() ; i++){
            if((s[i]>=97 && s[i]<=122) || s[i]>=48 && s[i]<=57)
                str += s[i];
        }
        string temp = str;
        reverse(temp.begin(),temp.end());
        if(str==temp)
            return true;
        else 
            return false;
    }
};
