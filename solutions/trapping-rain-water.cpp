//TRAPPING RAIN WATER -> 12/27/2021 00:04
//https://leetcode.com/problems/trapping-rain-water/submissions/
class Solution {
public:
    int trap(vector<int>& height) {
        stack<int> s;
        int top = 0;
        int distance =0;
        int ans = 0;
        int boundedHeight = 0 ;
        for(int i = 0 ; i < height.size() ; i++){
            while(!s.empty() && height[i]>height[s.top()]){
                    top = s.top();
                    s.pop();
                    if(s.empty())
                        break;
                    distance = i - s.top()-1;
                    boundedHeight = min(height[i],height[s.top()]) - height[top];
                    ans += boundedHeight*distance;
                }
            s.push(i);
        }
     return ans;
    }
};
