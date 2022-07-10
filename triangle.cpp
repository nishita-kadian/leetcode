//TRIANGLE -> 07/10/2022 11:40
//https://leetcode.com/problems/triangle/submissions/
class Solution {
public:
    unordered_map<string,int> cache;
    int dp(int row,int column,vector<vector<int>>& triangle){
        if(row>=triangle.size())
            return 0;
        
        stringstream ss;
        ss<<column<<'-'<<row;
        string key = ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        
        int answer = triangle[row][column] + min(dp(row+1, column, triangle),
                                                 dp(row+1, column+1, triangle));
        
        return cache[key] = answer;
    }
    
    int bu(vector<vector<int>>& triangle){
        vector<vector<int>> dpTable(triangle.size(), vector<int>(triangle.size(), 0));
        int row = triangle.size()-1;
        for(int i = row;i>=0;--i){
            for(int j = i;j>=0;--j){
                if(i == row){
                    dpTable[i][j] = triangle[i][j];
                    continue;
                }
                dpTable[i][j] = triangle[i][j] + min(dpTable[i+1][j], dpTable[i+1][j+1]);
            }
        }
        return dpTable[0][0];
    }
    
    int minimumTotal(vector<vector<int>>& triangle) {
       // return dp(0,0,triangle);
        return bu(triangle);
        
        //  int sum = triangle[0][0];
       //  int column = 0;
       //  for(int i = 1;i<triangle.size();i++){
       //      sum += min(triangle[i][column],triangle[i][column+1]);
       //      if(triangle[i][column]>triangle[i][column+1])
       //          column = column+1;
       //  }
       // return sum; 
        
    }
};
