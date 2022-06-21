//NETWORK DELAY TIME -> 06/21/2022 14:03
//https://leetcode.com/problems/network-delay-time/submissions/
class Solution {
public:
//     Bellman Ford Algorithm
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> t(n,INT_MAX);
        t[k-1] = 0;
        for(int i = 0 ; i < n ; i++){
            for(int j = 0 ; j < times.size() ; j++){
                if(t[times[j][0]-1]!=INT_MAX && t[times[j][0]-1] + times[j][2] < t[times[j][1]-1])
                    t[times[j][1]-1] = t[times[j][0]-1] + times[j][2];
            }
        }
        for(int i =0;i<t.size();i++)
            if(t[i]==INT_MAX)
                return -1;
        return *max_element(t.begin(),t.end());
    }
        
};

