//LONGEST PALINDROME -> 02/18/2022 14:20
//https://leetcode.com/problems/longest-palindrome/submissions/
class Solution {
public:
    int longestPalindrome(string s) {
        map<char,int> m;
        int length = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(m.find(s[i])!=m.end())
                m[s[i]]++;
            else
                m[s[i]]=1;
        }
        int even = 0;
        int odd = 0;
        int odd_elements = 0;
        int odd_max = INT_MIN;
        for(auto it = m.begin() ; it!=m.end() ;it++){
            if(it->second%2==0)
                even+=it->second;
            else{
                
                if(it->second<=odd_max){
                    length+=it->second-1;
                }
                else{
                    if(odd_max!=INT_MIN)
                        length+=odd_max-1;
                    odd_max=max(odd_max,it->second);
                }
                // else
                //     odd+=it->second;
                odd_elements++;
            }
        }
        length += even;
        // if(odd_elements==1 || odd_elements==0)
        //     length+=odd;
        // else
        if(odd_max!=INT_MIN)
             length+= odd_max;
        return length;
    }
};
