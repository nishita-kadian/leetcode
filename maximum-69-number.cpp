//MAXIMUM 69 NUMBER -> 07/15/2021 12:43
//https://leetcode.com/problems/maximum-69-number/submissions/
class Solution {
public:
    int maximum69Number (int num) {
        
        stringstream ss;
        ss << num;
        string str = ss.str();
        for(int i = 0;i<str.length();i++)
        {
            if(str[i]=='6')
            {
                str[i]='9';
                break;
            }
        }
        int result =stoi(str);
        
   return result;
    }
};
