//NUMBER OF TIMES BINARY STRING IS PREFIX ALIGNED -> 01/15/2022 21:56
//https://leetcode.com/problems/number-of-times-binary-string-is-prefix-aligned/submissions/
class Solution {
public:
    int numTimesAllBlue(vector<int>& flips) {
        string binary = "";
        for(int i = 0 ; i < flips.size() ; i++){
            binary += '0';
        }
        int count  = 0;
        int t = 0;
        for(int i = 0 ; i < flips.size() ; i++){
            binary[flips[i]-1] = '1';
            bool x = true;
            for(int j = t ; j<= i ; j++){
                if(binary[j]=='0'){
                        x = false;
                        break;
                    }
                t++;
            }
            if(x==true)
                count++;
        }
        return count;
    }
};
