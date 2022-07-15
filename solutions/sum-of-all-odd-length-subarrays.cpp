//SUM OF ALL ODD LENGTH SUBARRAYS -> 12/21/2020 19:40
//https://leetcode.com/problems/sum-of-all-odd-length-subarrays/submissions/
class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int size=1;size<=n;size=size+2)
        {
            for(int start=0;start<=n-size;start++)
            {
                int internalSum = 0;
                for(int j=0;j<size;j++)
                {
                    internalSum=internalSum+arr[start+j];
                }
                // cout<<internalSum<<" "<<size<<" "<<start<<endl;
                sum=sum+internalSum;
            }
        }
        
      return sum;  
    }
};
