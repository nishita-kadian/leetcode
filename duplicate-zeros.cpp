//DUPLICATE ZEROS -> 07/12/2021 14:36
//https://leetcode.com/problems/duplicate-zeros/submissions/
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int size = arr.size();
        for(int i = 0 ; i < size-1 ; i++ )
        {
            
            if(arr[i]==0)
            {
                arr.insert(arr.begin()+(i+1),0);
                i++;
                
            }
        }
        while(arr.size()!=size)
        {
            arr.pop_back();
        }
    
        
    }
};
