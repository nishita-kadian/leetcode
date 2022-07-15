//MINIMUM FALLING PATH SUM -> 07/05/2022 11:40
//https://leetcode.com/problems/minimum-falling-path-sum/submissions/
class Solution {
public:
    unordered_map<string,int> cache;
    int dp(int i,int j,vector<vector<int>> &matrix){
        if(j < 0 || j >= matrix.size())
            return INT_MAX-100;
        if(i == matrix.size()-1)
            return matrix[i][j];
        
        stringstream ss;
        ss<<i<<'-'<<j;
        string key  = ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        
       else
           return cache[key] = min(matrix[i][j]+dp(i+1,j,matrix),min(matrix[i][j]+dp(i+1,j+1,matrix),matrix[i][j]+dp(i+1,j-1,matrix)));
        
    }
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int minFallingSum = INT_MAX;
        for(int startCol = 0 ; startCol < matrix.size() ; startCol++){
            minFallingSum = min(minFallingSum,dp(0,startCol,matrix));
        }
        return minFallingSum;
    }
};

