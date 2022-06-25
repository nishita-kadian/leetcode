//JUMP GAME III -> 06/25/2022 17:10
//https://leetcode.com/problems/jump-game-iii/submissions/
class Solution {
public:
    void dfs(bool &ans,int index , vector<int> &arr, vector<bool> &visited){
        if(index<0 || index>=arr.size() || visited[index] == true)
            return;
        if(arr[index]==0){
            ans = true;
            return;
        }
        visited[index] = true;
        dfs(ans,index+arr[index],arr,visited);
        dfs(ans,index-arr[index],arr,visited);
        return;
        
    }
    bool canReach(vector<int>& arr, int start) {
        bool ans  = false;
        vector<bool> visited(arr.size(),false);
        dfs(ans,start,arr,visited);
        return ans;               
    }
};
