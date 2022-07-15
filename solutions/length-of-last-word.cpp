//LENGTH OF LAST WORD -> 12/29/2021 12:13
//https://leetcode.com/problems/length-of-last-word/submissions/
class Solution {
public:
    int lengthOfLastWord(string s) {
        int length = 0;
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]==' ')
                s.pop_back();
            else
                break;
        }
        for(int i = s.size()-1;i>=0;i--){
            if(s[i]==' ')
                break;
            else
                length++;
        }
             
            // while(s[i]<97 || s[i]>122){
            //     i--;
            // }
            // if(s[i]>=97 && s[i]<=122){
            //     length++; 
            // }  
            // else
            //     break;
        
        return length;
    }
};
