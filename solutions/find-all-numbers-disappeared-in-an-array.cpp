//FIND ALL NUMBERS DISAPPEARED IN AN ARRAY -> 12/16/2021 18:49
//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/submissions/
class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> m;
        int size = nums.size();
        vector<int> ans;
        for(int i = 0 ; i < size ; i++){
            if(m.find(nums[i])!=m.end())
                m[nums[i]]++;
            else
                m[nums[i]] = 1 ;
        }
        // for(auto it  = m.begin();it!=m.end();it++)
        // {
        //     cout<<it->first<<endl;
        // }
        for(int i = 1 ; i < size+1 ; i++){
            if(m.find(i)==m.end())
                ans.push_back(i);
        }
        return ans;
    }
};
