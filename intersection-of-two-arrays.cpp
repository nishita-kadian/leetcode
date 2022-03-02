//INTERSECTION OF TWO ARRAYS -> 03/02/2022 15:13
//https://leetcode.com/problems/intersection-of-two-arrays/submissions/
class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans;
        unordered_set<int> s1;
        unordered_set<int> s2;
        for(int i =0;i<nums1.size();i++)
            s1.insert(nums1[i]);
        for(int i =0;i<nums2.size();i++)
            s2.insert(nums2[i]);
        for(auto i = s1.begin();i!=s1.end();i++){
            if(s2.find(*i)!=s2.end())
                ans.push_back(*i);
        }
        return ans;
    }
};
