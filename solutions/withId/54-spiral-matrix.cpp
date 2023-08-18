class Solution {
public:
    vector<int> spiral(vector<vector<int>>& matrix, pair<int,int> topLeft, pair<int,int> bottomRight){
        vector<int> answer;
        for(int c = topLeft.second;c <= bottomRight.second;c++)
            answer.push_back(matrix[topLeft.first][c]);
        
        if(topLeft.first == bottomRight.first)
            return answer;
        
        for(int r = topLeft.first + 1;r <= bottomRight.first;r++)
            answer.push_back(matrix[r][bottomRight.second]);
        
        if(topLeft.second == bottomRight.second)
            return answer;
        
        
        for(int c = bottomRight.second - 1;c >= topLeft.second;c--)
            answer.push_back(matrix[bottomRight.first][c]);
        
        for(int r = bottomRight.first - 1;r >= topLeft.first+1;r--)
            answer.push_back(matrix[r][topLeft.second]);
        return answer;
        
    }
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();
        vector<int> result;
        pair<int,int> topLeft = {0, 0};
        pair<int,int> bottomRight = {m - 1, n - 1};
        while(topLeft.first <= bottomRight.first && topLeft.second <= bottomRight.second){
            vector<int> temp = spiral(matrix, topLeft, bottomRight);
            result.insert(result.end(), temp.begin(), temp.end());
            topLeft.first++;
            topLeft.second++;
            bottomRight.first--;
            bottomRight.second--;
        }
        return result;
    }
};