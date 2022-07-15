//SINGLE ELEMENT IN A SORTED ARRAY -> 08/15/2021 23:48
//https://leetcode.com/problems/single-element-in-a-sorted-array/submissions/
class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int ans = 0;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            ans = ans^nums[i];
        }
        // map<int,int> m;
        // int ans=0;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     if(m.find(nums[i])!=m.end())
        //     {
        //         m[nums[i]] += 1;
        //     }
        //     else
        //     {
        //         m[nums[i]] = 1;
        //     }
        // }
        // for(map<int,int>::iterator it=m.begin() ; it!=m.end() ; it++)
        // {
        //     if(it->second==1)
        //     {
        //         ans = it->first;
        //         break;
        //     }
        // }
        return ans;
    }
            
//         int count=0;
//         int mid = nums[nums.size()/2];
//         int n=0;
//         for(int i=0;i<nums.size();)
//         {
//             if(nums[i]==nums[i+1])
//             {
//                 i=i+2;
//                 continue;
//             }
//             else 
//             {
//                 n=i;
//                 break;
//             }
            
            
//         }
//         return nums[n];
//     }
};
