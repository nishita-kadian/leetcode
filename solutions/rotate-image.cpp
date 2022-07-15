//ROTATE IMAGE -> 12/19/2021 00:09
//https://leetcode.com/problems/rotate-image/submissions/
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
       vector<vector<int>> v(matrix.size(),vector<int>(matrix.size(),0));
        vector<int> temp ;
        for(int i = 0 ; i < matrix.size() ; i++){
            for(int j = matrix.size()-1; j >= 0 ; j--){
                temp.push_back(matrix[j][i]);
            }
            v[i] = temp;
            temp.clear();
        }
        matrix = v;
       
    }
};
