//PALINDROME NUMBER -> 08/15/2021 23:54
//https://leetcode.com/problems/palindrome-number/submissions/
class Solution {
public:
    bool isPalindrome(int x) {
        string s,s1;
        
        if(x < 0)
            return false;
        else
        {
            s = to_string(x);
            s1 = s;
            reverse(s1.begin(),s1.end());
            
            if(s==s1)
                return true;
            else 
                return false;
        }
        
    }
};
