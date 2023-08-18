class Solution {
public:
    void spiral(pair<int,int> topLeft, pair<int,int> bottomRight, vector<vector<int>> &matrix, int &number){
        for(int c = topLeft.second;c<=bottomRight.second;c++){
            matrix[topLeft.first][c] = number;
            number++;
        }
       
        if(topLeft.first == bottomRight.first)
            return;
        
        for(int r = topLeft.first + 1;r <= bottomRight.first;r++){
            matrix[r][bottomRight.second] = number;
            number++;
        }
        
        if(topLeft.second == bottomRight.second)
            return ;
        
        for(int c = bottomRight.second - 1;c >= topLeft.second;c--){
            matrix[bottomRight.first][c] = number;
            number++;
        }
        
        for(int r = bottomRight.first - 1;r >= topLeft.first+1;r--){
            matrix[r][topLeft.second] = number;
            number++;
        }
        return ;
    }
    
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> matrix(n, vector<int>(n, 0));
        pair<int,int> topLeft = {0, 0};
        pair<int,int> bottomRight = {n-1, n-1};
        int number = 1;
        while(topLeft.first <= bottomRight.first && topLeft.second <= bottomRight.second ){
            spiral(topLeft, bottomRight, matrix, number);
            topLeft.first++;
            topLeft.second++;
            bottomRight.first--;
            bottomRight.second--;
        }
        return matrix;
                                   
                                   
    }
};