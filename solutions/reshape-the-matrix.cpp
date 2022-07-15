//RESHAPE THE MATRIX -> 11/13/2021 11:47
//https://leetcode.com/problems/reshape-the-matrix/submissions/
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> v(r,vector<int> (c));
        queue<int> q;
        int temp = 0;
        bool x = true;
        int w = mat.size();
        int e = mat[0].size();
        int u = w*e;
        int p = c*r;
        if(u<p || u>p)
            x = false;
        else
        {
             for(int i = 0 ;i < mat.size();i++)
             {
                 for(int j = 0 ; j < mat[0].size() ; j++)
                 {
                     q.push(mat[i][j]);
                 }
             }
            for(int i = 0 ; i < r ; i++)
             {
                 for(int j = 0 ; j < c ; j++)
                 {
                     temp = q.front();
                     q.pop();
                     v[i][j] = temp;
                 }
             }
         }
        if(x)
            return v;
        else
            return mat;
    }
};
