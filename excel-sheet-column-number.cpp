//EXCEL SHEET COLUMN NUMBER -> 02/22/2022 12:07
//https://leetcode.com/problems/excel-sheet-column-number/submissions/
class Solution {
public:
    int titleToNumber(string columnTitle) {
        int l = columnTitle.length();
        int t=0;
        int a = 0;
        int sum = 0;
        for(int i=l-1;i>=0;i--)
        {
            t = columnTitle[i] - 64;
            sum = sum + t*powl(26,a);
            a++;
        }
        return sum;
    }
};
