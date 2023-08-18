class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        if(intervals.size()==1)
            return intervals;
        vector<vector<int>> ans;
        sort(intervals.begin(),intervals.end());
        int last = intervals[0][1];
        int first = intervals[0][0];
        int counter = 0;
        for(int i = 1;i<intervals.size();i++){
            if(counter!=i){
                if(intervals[i][0]<=last){
                    last = max(last,intervals[i][1]);
                if(i==intervals.size()-1){
                    ans.push_back({first,last});
                }
            }
                else{
                    vector<int> temp = {first,last};
                    ans.push_back(temp);
                    if(i!=intervals.size()-1){
                        first = intervals[i][0];
                        last = intervals[i][1];
                        counter = i;
                    }
                    else{
                        ans.push_back({intervals[intervals.size()-1][0],intervals[intervals.size()-1][1]});
                    }
                }
            }
            else{
                continue;
            }
                    
        }
        return ans;
    }
};