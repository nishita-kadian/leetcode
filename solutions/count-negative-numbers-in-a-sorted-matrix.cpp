//COUNT NEGATIVE NUMBERS IN A SORTED MATRIX -> 02/08/2022 00:39
//https://leetcode.com/problems/count-negative-numbers-in-a-sorted-matrix/submissions/
class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
     int count = 0;
       int i = 0;
        int j = grid[0].size()-1;
        while(i<grid.size() && j>=0){
            if(grid[i][j]<0){
                count+=grid.size()-i;
                j--;
            }
            else{
                i++;
            }
        }
        return count;
    }
};
