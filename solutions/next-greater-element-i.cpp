//NEXT GREATER ELEMENT I -> 08/13/2021 11:57
//https://leetcode.com/problems/next-greater-element-i/submissions/
class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int> ans(nums1.size(),-1);
        stack<int> st;
        map<int,int> m;
        
        for(int i = 0 ; i < nums2.size() ; i++)
        {
            while(!st.empty() && nums2[i] > st.top())
            {
                m[st.top()] = nums2[i];
                st.pop();
            }
            st.push(nums2[i]);
        }
        for(int i = 0 ; i < nums1.size() ; i++)
        {
            if(m.find(nums1[i])!=m.end())
            {
                ans[i] = m[nums1[i]];
            }
        }
        return ans;
        
//         int pos = 0;
//         stack<int> s;
//         map<int,int> m;
//         vector<int> ans;
//         bool found = false;
//         for(int i = 0 ; i < nums2.size();i++)
//         {
//             m[nums2[i]] = i ;
//         }
//         for(int i = 0 ; i < nums1.size() ;i++)
//         {
//             if(m.find(nums1[i])!=m.end())
//             {
//                 pos = m[nums1[i]];
//                 if(pos == nums2.size()-1)
//                 {
//                     ans.push_back(-1);
//                     found =true;
//                 }
//                 s.push(nums1[i]);
//                 for(int j = pos+1 ; j<nums2.size();j++)
//                 {
//                     if(nums2[j] > s.top())
//                     {
//                         found = true;
//                         ans.push_back(nums2[j]);
//                         s.pop();
//                     }
                    
//                 }
//                 if(found==false)
//                 {
//                     ans.push_back(-1);
//                 }
//             }
            
//         }
//         return ans;
    }
};
