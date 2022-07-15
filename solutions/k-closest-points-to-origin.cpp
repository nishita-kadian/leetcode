//K CLOSEST POINTS TO ORIGIN -> 08/06/2021 21:24
//https://leetcode.com/problems/k-closest-points-to-origin/submissions/
class Solution {
public:
    int euclidDistance(vector<int> point){
        // return: Eucledian distance with origin
        return ((point[0])*(point[0]) + (point[1])*(point[1]));
    }
    
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        map<int, vector<int> >m;
        vector<int> distance;
        vector<vector<int> > ans;
        int d = 0;
        for(int i = 0;i < points.size();i++)
        {
            d = euclidDistance(points[i]);
            if(m.find(d) != m.end()){
                m[d].push_back(i);
            }
            else
                m[d] = vector<int>(1,i);
            
            distance.push_back(d);
        }
        sort(distance.begin(),distance.end());
        int x = 0;
        for(;k > 0;)
        {
            for(int i = 0;i < m[distance[x]].size() && k > 0;++i){
                int index = m[distance[x]][i];
                ans.push_back(points[index]);
                k--;
            }
            x++;
        }
        return ans;
        
    }
};

