//LETTER TILE POSSIBILITIES -> 02/22/2022 21:45
//https://leetcode.com/problems/letter-tile-possibilities/submissions/
class Solution {
public:
    void backTrack(string tiles,string path,set<string> &answer,unordered_map<int,bool> &visited){
        answer.insert(path);
        for(int i = 0 ; i<tiles.size();i++){
            if(visited[i])
                continue;
            path+=tiles[i];
            visited[i]=true;
            backTrack(tiles,path,answer,visited);
            visited[i]=false;
            path.pop_back();
        }
    }
    int numTilePossibilities(string tiles) {
        set<string> answer;
        string path = "";
        unordered_map<int,bool> visited;
        for(int i = 0 ; i< tiles.size();i++){
            visited[i]=false;
        }
        backTrack(tiles,path,answer,visited);
        return answer.size()-1;
        
    }
};
