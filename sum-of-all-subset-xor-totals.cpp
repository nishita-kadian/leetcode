//SUM OF ALL SUBSET XOR TOTALS -> 08/11/2021 09:39
//https://leetcode.com/problems/sum-of-all-subset-xor-totals/submissions/
class Solution {
public:
    string binary(int a)
    {
        bitset<32> bits(a);
        return bits.to_string();
        
    }
    int subsetXORSum(vector<int>& nums) {
        vector<int> v;
        
        int size  = nums.size();
        int x  =  pow(2,size);
        string s;
        int sum = 0;
        int temp = 0;
        for(int i = 1 ; i < x ; i++)
        {
            s = binary(i);
          
             reverse(s.begin(),s.end());
            
            for(int j = 0 ; j<size;j++)
            {
                if(s[j]=='1')
                {
                    v.push_back(nums[j]);
                }
            }
           
            
            
            if(v.size() == 1)
            {
                temp = v[0];
            }
            else
            {
                for(int k = 0 ; k < v.size() ; k++)
                {
                    temp = temp ^ v[k];
                }
            }
            
            sum = sum + temp;
            temp = 0;
            v.clear();
        }
        
        return sum;
    }
};
