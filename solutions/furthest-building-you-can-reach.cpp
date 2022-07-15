//FURTHEST BUILDING YOU CAN REACH -> 06/21/2022 15:41
//https://leetcode.com/problems/furthest-building-you-can-reach/submissions/
class Solution {
public:
        // SOL //
    int furthestBuilding(vector<int>& heights, int bricks, int ladders) {
        priority_queue<int,vector<int>,greater<int>> pq;
        vector<int> diff(heights.size(),0);
        for(int i = 0 ; i < heights.size()-1; i++){
            if(heights[i]>=heights[i+1])
                continue;
            else
                diff[i+1] = heights[i+1] - heights[i];
        }
        int j = 1;
        while(j<diff.size()){
            if(diff[j]>0)
                pq.push(diff[j]);
            if(pq.size()>ladders){
                bricks-=pq.top();
                pq.pop();
                if(bricks<0)
                    return j-1;
            }
            j++;
        }
        return heights.size()-1;
    }
};
