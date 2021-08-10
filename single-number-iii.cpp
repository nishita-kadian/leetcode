//SINGLE NUMBER III -> 08/10/2021 21:29
//https://leetcode.com/problems/single-number-iii/submissions/
class Solution {
public:
    string binary(int a)
    {
        bitset<32> bits(a);
        return bits.to_string();
//         string s = "";
//         while(a>0)
//         {
//             s += a%2;
//             a = a/2;
            
//         }
//         reverse(s.begin(),s.end());
//         return s;
    }
    vector<int> singleNumber(vector<int>& nums) {
        
        
        int x = 0;
        int a1 = 0;
        int a2 = 0;
        string s1;
        string a;
        int count = 0;
        vector<int> v1;
        vector<int> v2;
     for(int i = 0 ; i<nums.size() ; i++)
     {
         x = x ^ nums[i];
     }
     
        
    s1 = binary(x);
    for(int i = s1.length()-1 ; i > 0; i--)
    {
        if(s1[i]=='1')
        {
            break;
        }
        else
            count++;
    }
        long int n = pow(2,count);
        for(int i= 0 ; i <nums.size();i++)
        {
            if((nums[i]&n)==0)
            {
                v1.push_back(nums[i]);
            }
            else 
            {
                v2.push_back(nums[i]);
            }
            
        }
    
    for(int i = 0 ; i<v1.size() ; i++)
     {
         a1 = a1 ^ v1[i];
     }
        for(int i = 0 ; i<v2.size() ; i++)
     {
         a2 = a2 ^ v2[i];
     }
        vector<int>ans;
        ans.push_back(a1);
        ans.push_back(a2);
        return ans;
    }
    
};
