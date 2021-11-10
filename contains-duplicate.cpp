//CONTAINS DUPLICATE -> 11/10/2021 10:58
//https://leetcode.com/problems/contains-duplicate/submissions/
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
//         map<int,int> m;
//         bool x =false;;
//         for(int i = 0 ; i < nums.size() ; i++)
//         {
//             if(m.find(nums[i])!=m.end())
//             {
//                 m[nums[i]]++;    
//             }
//             else
//                 m[nums[i]] = 1;
            
//         }
//         for(auto it  = m.begin();it!=m.end();it++)
//         {
//             if(it->second>=2)
//             {  
//                 x = true;
//                 break;
//             }
//         }
//         return x;
//     }
        
        sort(nums.begin(),nums.end());
     for(int i = 0 ; i < nums.size()-1 ; i++)
     {
         if(nums[i]==nums[i+1])
            return true;
     }
        return false;
    }
};
//  can be done using maps

