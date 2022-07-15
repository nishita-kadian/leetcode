//MINIMUM MOVES TO EQUAL ARRAY ELEMENTS II -> 06/30/2022 17:30
//https://leetcode.com/problems/minimum-moves-to-equal-array-elements-ii/submissions/
class Solution {
public:
    int minMoves2(vector<int>& nums) {
        if(nums.size()==0 || nums.size()==1)
            return 0;
        int ans = 0;
        sort(nums.begin(),nums.end());
        int mid = nums.size()/2;
        if(nums.size()%2==0){
            for(int i = 0 ; i < nums.size() ; i++){
                ans+=abs(nums[mid]-nums[i]);
            }
        }
        else{
            int mid1 = mid+1;
            int x = 0;
            int y = 0;
            for(int i = 0 ; i < nums.size() ; i++){
                x+=abs(nums[mid]-nums[i]);
                y+=abs(nums[mid1]-nums[i]);
            }
            ans = min(x,y);
        }
        return ans;
    }
};
