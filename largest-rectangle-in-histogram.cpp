//LARGEST RECTANGLE IN HISTOGRAM -> 01/29/2022 19:24
//https://leetcode.com/problems/largest-rectangle-in-histogram/submissions/
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<pair<int,int>> s;
        stack<pair<int,int>> s1;
        vector<int> nextSmallest(heights.size(),heights.size());
        vector<int> areas(heights.size());
        vector<int> previousSmallest(heights.size(),-1);
        int area = 0;
        //int count = 0;
        //int mini = INT_MAX;
        //int k  = 0;
        // for(int j = 0 ; j < heights.size() ; j++){
        //     area = max(area,heights[j]);
        //     mini = min(mini,heights[j]);
        // }
        // area = max(area,mini*heights[i]);
        for(int i = 0 ; i <heights.size() ; i++){
            while(!s.empty() && s.top().first>heights[i]){
                nextSmallest[s.top().second] = i;
                s.pop();
            }
            s.push(make_pair(heights[i],i));
        }
        // while(!s.empty()){
        //     if(s.top().first>heights[i]){
        //         nextSmallest[s.top().second] = i;
        //         s.pop(); 
        //         i++;
        //     }
        //     else{
        //         s.push(make_pair(heights[i],i));
        //         i++;
        //     }
        // }
       //  int j = heights.size()-1;
       //  while(!s.empty()){
       //      if(s.top().first>heights[j]){
       //          previousLargest[s.top().second] = j;
       //          s.pop(); 
       //          j--;
       //      }
       //      else{
       //          s.push(make_pair(heights[j],j));
       //          j--;
       //      }
       //  }
       
        for(int i = heights.size()-1 ; i >=0 ; i--){
            while(!s1.empty() && s1.top().first>heights[i]){
                previousSmallest[s1.top().second] = i;
                s1.pop();
            }
            s1.push(make_pair(heights[i],i));
        }
        for(int i = 0 ; i<nextSmallest.size();i++){
           areas[i] = heights[i]*(nextSmallest[i]-i) + heights[i]*(i-previousSmallest[i]) - heights[i];
       }
        cout<<nextSmallest[nextSmallest.size()-1]<<endl;
        cout<<previousSmallest[previousSmallest.size()-1]<<endl;
        // area = max(nextSmallest[nextSmallest.size()-1],(max(area,previousLargest[previousLargest.size()-1])));
        sort(areas.begin(),areas.end());
        return areas[areas.size()-1];
    }
};
