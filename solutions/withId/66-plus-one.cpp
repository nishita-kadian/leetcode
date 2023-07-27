class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 0;
        int pos = digits.size()-1;
        digits[pos]++;
        while(pos>=0){
            digits[pos]+=carry;
            if(digits[pos]>9){
                carry = 1;
                digits[pos] = 0;
            }
            else{
                carry = 0;
            }
            pos--;
        }
        if(carry){
            digits.insert(digits.begin(),carry);
        }
        return digits;
    }
};