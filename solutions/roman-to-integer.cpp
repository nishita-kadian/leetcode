//ROMAN TO INTEGER -> 11/10/2021 21:31
//https://leetcode.com/problems/roman-to-integer/submissions/
class Solution {
public:
    int romanToInt(string s) {
     
        map<string,int>m;
        m["I"] = 1;
        m["V"] = 5;
        m["X"] = 10;
        m["L"] = 50;
        m["C"] = 100;
        m["D"] = 500;
        m["M"] = 1000;
        m["IV"] = 4;
        m["IX"] = 9;
        m["XL"] = 40;
        m["XC"] = 90;
        m["CD"] = 400;
        m["CM"] = 900;
        
        int n = s.size();
        int ans = 0;
        string x = "";
        for(int i = 0 ; i < n ; )
        {
            if(s[i]=='I')
            {
                if(s[i+1]=='V' || s[i+1]=='X')
                {
                    x =s.substr(i,2);
                    ans+=m[x];
                    x = "";
                    i+=2;
                }
                else{
                    x = s[i];
                    ans+=m[x];
                    i++;
                }
                    
            }
            else if(s[i]=='X')
            {
                if(s[i+1]=='L' || s[i+1]=='C')
                {
                    x =s.substr(i,2);
                    ans+=m[x];
                    x = "";
                    i+=2;
                }
                else{
                    x = s[i];
                    ans+=m[x];
                    i++;
                }
            }
            else if(s[i]=='C')
            {
                if(s[i+1]=='D' || s[i+1]=='M')
                {
                    x = s.substr(i,2);
                    ans+=m[x];
                    x = "";
                    i+=2;
                }
                else{
                    x = s[i];
                    ans+=m[x];
                    i++;
                }
            }
            else{
                    x = s[i];
                    ans+=m[x];
                    i++;
                }
               
        }
    return ans;  
    }
};
