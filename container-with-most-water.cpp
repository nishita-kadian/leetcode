//CONTAINER WITH MOST WATER -> 12/31/2021 12:31
//https://leetcode.com/problems/container-with-most-water/submissions/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int start = 0;
        int end = height.size()-1;
        int maxWater = INT_MIN;
        while(end - start >= 1){
            int currentWater = (end-start)*(min(height[start],height[end]));
            // cout<<currentWater<<endl;
            maxWater = max(currentWater,maxWater);
            if(height[start]<=height[end])
                start++;
            else
                end--;
            // cout<<"s"<<start<<endl;
            // cout<<"e"<<end<<endl;
        }
        return maxWater;
    }
};
