//VALID MOUNTAIN ARRAY -> 01/25/2022 13:42
//https://leetcode.com/problems/valid-mountain-array/submissions/
class Solution {
public:
    bool validMountainArray(vector<int>& arr) {
        int i = 0;
        int j = arr.size()-1;
        while(i<arr.size()-1 && arr[i+1]>arr[i])
            i++;
        while(j>0 && arr[j-1]>arr[j])
            j--;
        return (i==j)&&(i<arr.size())&&(j>0)&&(i!=0)&&(j!=arr.size()-1)?true:false;
    }
};
