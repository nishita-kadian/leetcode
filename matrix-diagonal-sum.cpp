//MATRIX DIAGONAL SUM -> 12/25/2020 13:03
//https://leetcode.com/problems/matrix-diagonal-sum/submissions/
class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int sum=0;
        int n=mat.size();
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[0].size();j++)
            {
                if(i==j)
                {
                    sum=sum+mat[i][j];
                }
                
               
            }
            
                
                sum=sum+mat[i][n-1-i];
            if(i==(n-1-i))
            {
                sum=sum-mat[i][i];
            }
                      
                       
                
        }
        
        return sum;
    }
};
