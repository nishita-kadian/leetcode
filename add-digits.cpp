//ADD DIGITS -> 02/08/2022 10:58
//https://leetcode.com/problems/add-digits/submissions/
class Solution {
public:
    int addDigits(int num) {
        if(num/10==0)
            return num;
        while(num/10>0){
            int sum = 0;
            while(num>0){
                sum += num%10;
                num = num/10;
            }
            num = sum;
        }
        return num;
    }
};
