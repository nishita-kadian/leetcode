class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        for(int i = 0 ; i< matrix.size() ; i++){
            for(int j = i+1 ; j < matrix.size() ; j++){
                if(i==j)
                    continue;
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        
        for(int j = 0 ; j < matrix.size()/2 ; j++){
            for(int i = 0 ; i < matrix.size() ; i++){
                swap(matrix[i][j],matrix[i][matrix.size()-1-j]);
            }
        }
        return;
    }
};