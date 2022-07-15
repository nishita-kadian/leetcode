//COURSE SCHEDULE II -> 06/23/2022 17:58
//https://leetcode.com/problems/course-schedule-ii/submissions/
class Solution {
public:
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        vector<int> ans;
        vector<vector<int>> graph(numCourses);
        queue<int> q;
        vector<int> indeg(numCourses,0);
        for(int i = 0;i<prerequisites.size();i++){
            graph[prerequisites[i][1]].push_back(prerequisites[i][0]);
            indeg[prerequisites[i][0]]++;
        }
        for(int i = 0 ; i < indeg.size();i++){
            if(indeg[i] == 0){
                q.push(i);
                numCourses--;
            }
        }
        while(!q.empty()){
            int p = q.front();
            q.pop();
            ans.push_back(p);
            for(int i = 0;i<graph[p].size();i++){
                indeg[graph[p][i]]--;
                if(indeg[graph[p][i]]==0){
                    q.push(graph[p][i]);
                    numCourses--;
                }
            }
        }
        if(numCourses==0)
            return ans;
        else{
            ans.clear();
            return ans;
        }
        return ans;
    }
};
