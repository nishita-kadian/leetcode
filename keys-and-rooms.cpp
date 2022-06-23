//KEYS AND ROOMS -> 06/23/2022 12:10
//https://leetcode.com/problems/keys-and-rooms/submissions/
class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> key(rooms.size(),false);
        vector<bool> visited(rooms.size(),false);
        key[0] = true;
        visited[0] = true;
        queue<int> q;
        q.push(0);
        while(!q.empty()){
            int p = q.front();
            q.pop();
            for(int i=0;i<rooms[p].size();i++){
                key[rooms[p][i]] = true;
                if(key[rooms[p][i]]==true && visited[rooms[p][i]]==false){
                    visited[rooms[p][i]] = true;
                    q.push(rooms[p][i]);
                }
            }
        }
        for(int i =0;i<visited.size();i++){
            cout<<visited[i]<<endl;
        }
        for(int i =0;i<visited.size();i++){
            if(visited[i]==false)
                return false;
        }
        return true;
    }
};
