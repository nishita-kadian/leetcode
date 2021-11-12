//INTERSECTION OF TWO ARRAYS II -> 11/12/2021 19:19
//https://leetcode.com/problems/intersection-of-two-arrays-ii/submissions/
class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
        vector<int> ans;
        map<int,int> n1;
        for(int i = 0 ; i < n ; i++)
        {
            if(n1.find(nums1[i])!=n1.end())
            {
                n1[nums1[i]]++;
            }
            else
                n1[nums1[i]] = 1;
        }
        for(int i = 0 ; i < m ; i++)
        {
            if(n1.find(nums2[i])!=n1.end() && n1[nums2[i]]!=0)
            {
                ans.push_back(nums2[i]);
                n1[nums2[i]] -= 1;
            }
            
        }
        return ans;
    }
};
