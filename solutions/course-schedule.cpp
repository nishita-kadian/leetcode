//COURSE SCHEDULE -> 06/23/2022 18:51
//https://leetcode.com/problems/course-schedule/submissions/
class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        queue<int> q;
        vector<vector<int>> graph(numCourses);
        vector<int> indegree(numCourses,0);
        for(int i = 0 ; i< prerequisites.size() ; i++){
            int first = prerequisites[i][1];
            int second = prerequisites[i][0];
            graph[first].push_back(second);
            indegree[prerequisites[i][0]]++;
        }
        
        for(int i =0;i<indegree.size();i++){
            if(indegree[i]==0){
                q.push(i);
                numCourses--;
            }
        }
            
        while(!q.empty()){
            int p = q.front();
            q.pop();
            for(int i = 0;i<graph[p].size();i++){
                indegree[graph[p][i]]--;
                if(indegree[graph[p][i]]==0){
                    q.push(graph[p][i]);
                    numCourses--;
                }
            }
        }
    if(numCourses==0)
        return true;
    else 
        return false;
    }
};
