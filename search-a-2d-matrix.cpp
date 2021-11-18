//SEARCH A 2D MATRIX -> 11/18/2021 09:32
//https://leetcode.com/problems/search-a-2d-matrix/submissions/
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i = 0;
        int k = 0;
        int j = matrix[0].size()-1;
        int left = matrix[k][i];
        int right = matrix[k][j];
        for(int k=0;k < matrix.size();k++)
        {
            i=0;
            j=matrix[k].size()-1;
            left = matrix[k][i];
            right = matrix[k][j];        
            if(target>=left && target<=right)
            {
                int mid = (i+j)/2;
                while(i<=j)
                {
                    if(matrix[k][mid]<target)
                    {
                        i = mid+1;
                        mid = (i+j)/2;
                    }
                    else if(matrix[k][mid]>target)
                    {
                        j = mid-1;
                        mid = (i+j)/2;
                    }
                    else if(matrix[k][mid]==target)
                    {
                        return true;
                    }
                }
            }
        }
        return false;
    }
};
