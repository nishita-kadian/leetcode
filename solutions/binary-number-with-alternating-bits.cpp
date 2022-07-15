//BINARY NUMBER WITH ALTERNATING BITS -> 08/06/2021 14:19
//https://leetcode.com/problems/binary-number-with-alternating-bits/submissions/
class Solution {
public:
    bool hasAlternatingBits(int n) {
    string s = "";
    while(n>0)
    {
        int a = n%2;
        s += a;
        n = n/2;
    }
    reverse(s.begin(),s.end());
    for(int i = 0 ; i < s.length()-1 ; i++)
    {
        if(s[i]==s[i+1])
        {
            return false;
            
        }

    }
    return true;
    }
};
