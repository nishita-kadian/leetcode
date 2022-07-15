//VIDEO STITCHING -> 07/13/2022 11:39
//https://leetcode.com/problems/video-stitching/submissions/
class Solution {
public:
    unordered_map<string, int> cache;
    int solve(int index, int endTime, vector<vector<int>>& clips, int& time){
        // base case
        if(index == clips.size()){
            if(endTime >= time)
                return 0;
            else
                return 1e8;
        }
        // memo
        stringstream ss;
        ss << index << "-" << endTime;
        string key = ss.str();
        
        if(cache.find(key) != cache.end())
            return cache[key];
        
        // recursion
        // no take
        int answerNoTake = solve(index + 1, endTime, clips, time);
        // take
        int answerTake = 1e8;
        if(clips[index][0] <= endTime)
            answerTake = 1 + solve(index + 1, clips[index][1], clips, time);
        return cache[key] = min(answerNoTake, answerTake);
    }
    
    int videoStitching(vector<vector<int>>& clips, int time) {
        sort(clips.begin(), clips.end());
        int answer = solve(0, 0, clips, time);
        if(answer >= 1e8)
            return -1;
        return answer;
    }
};




