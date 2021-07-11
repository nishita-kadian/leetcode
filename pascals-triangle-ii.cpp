//PASCALS TRIANGLE II -> 07/11/2021 21:53
//https://leetcode.com/problems/pascals-triangle-ii/submissions/
class Solution {
public:
    vector<int> getRow(int rowIndex) {
      vector<vector<int>> v;
       vector<int> vec;
        vector<int> a={1};
        vector<int> b={1,1};
        if(rowIndex==0)
            return a;
        v.push_back(a);
        if(rowIndex==1)
            return b;
        v.push_back(b);
        
        
        for(int i=2 ; i <= rowIndex ;i++)
        {
            vector<int> vec(i+1);
            vec[0]=1;
            vec[i]=1;
            for(int j=1 ; j < i ; j++)
            {
                vec[j] = v[i-1][j-1] + v[i-1][j];
                  
            }
            v.push_back(vec);
        
        }
      return v[rowIndex];    
    }
};
