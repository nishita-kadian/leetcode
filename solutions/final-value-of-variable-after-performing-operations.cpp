//FINAL VALUE OF VARIABLE AFTER PERFORMING OPERATIONS -> 01/01/2022 21:55
//https://leetcode.com/problems/final-value-of-variable-after-performing-operations/submissions/
class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
    int x = 0;
        for(int i = 0 ; i < operations.size() ; i++){
            if(operations[i] == "X++" || operations[i] == "++X" )
                x++;
            else
                x--;
        }
        return x;
    }
};
