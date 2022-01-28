//MEDIAN OF TWO SORTED ARRAYS -> 01/28/2022 12:37
//https://leetcode.com/problems/median-of-two-sorted-arrays/submissions/
class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
     double ans = 0;
        vector<int> vec;
        int i = 0;
        int j = 0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<nums2[j]){
                vec.push_back(nums1[i]);   
                i++;
            }
            else{
                vec.push_back(nums2[j]);
                j++;
            }
        }
        if(i==nums1.size() && j!=nums2.size()){
            while(j<nums2.size()){
                vec.push_back(nums2[j]);
                j++;
            }
        }
        else if(j == nums2.size() && i!=nums1.size()){
            while(i<nums1.size()){
                vec.push_back(nums1[i]);
                i++;
            }
        }
        int size = vec.size();
        if(size%2!=0){
            int x = ceil(size/2);
            ans = vec[x];
        }
        else{
            int x = size/2;
            int y = x-1;
            
            ans = (vec[x]+vec[y])/2.00;
        }
        return ans;
    }
};
