//TWO SUM -> 11/12/2021 19:41
//https://leetcode.com/problems/two-sum/submissions/
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       map<int,vector<int> > m;
        vector<int> ans;
        for(int i = 0 ; i < nums.size() ; i++)
        {
            if(m.find(nums[i])!=m.end())
            {
                m[nums[i]].push_back(i); 
                
            }
            else
                m[nums[i]]= vector<int>(1,i);
        }
       
        for(int i = 0 ; i < nums.size();i++)
        {
            if(target-nums[i]==nums[i] && m[target-nums[i]].size()==1)
            {
                continue;
            }
            if(m.find(target - nums[i])!=m.end())
            {
                ans.push_back(i);
                if(m[target-nums[i]].size()!=1)
                {
                    ans.push_back(m[target-nums[i]][1]);
                    break;
                }
                else{
                    ans.push_back(m[target-nums[i]][0]);
                    break;
                }
            }
        }
        return ans;
    }
    
        // map<int,int>m;
        // vector<int> ans;
        // for(int i = 0 ; i < nums.size() ; i++)
        // {
        //     m[nums[i]] = i;
        // }
        // sort(nums.begin(),nums.end());
        // for(int i = 0 ; i < nums.size()-1 ; i++)
        // {
        //     int low  = i+1;
        //     int high = nums.size()-1;
        //     int mid = (low + high)/2;
        //     while(low <= high)
        //     {   
        //         if(target - nums[i] == nums[mid])
        //         {
        //             ans.push_back();
        //         }
        //     }
        // }
//     int n;
//     cin>> n;
//     cin >> target;
//         vector<int> out(2);
//     for(int i = 0 ; i < n ; i++)
//     {
//         cin >> nums[i];
//     }


//     for(int j = 0 ; j < n-1 ; j++ )
//     {
//         for(int i = j+1 ; i < n ; i++)
//         {
//             if(nums[j] + nums[i] == target )
//             {
//                 out[0]=j;
//                 out[1]=i;
//             }
//         }
//     }
 // return ans;
 //  }
};
