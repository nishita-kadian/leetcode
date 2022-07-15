//PLUS ONE -> 01/17/2022 16:55
//https://leetcode.com/problems/plus-one/submissions/
class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int i = digits.size()-1;
        int carry  = 0;
        if(digits[digits.size()-1]<9){
            digits[digits.size()-1]++;
            return digits;
        }
        else{
            while(i>=0){
                if(digits[i]>=9){
                    digits[i] = 0;
                    carry = 1;
                }
                else{
                    digits[i]++;
                    carry--;
                    break;
                }
                i--;
            }
        }
        if(carry == 1)
            digits.insert(digits.begin()+0,1);
      return digits;
    }
};
