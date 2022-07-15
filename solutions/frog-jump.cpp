//FROG JUMP -> 07/11/2022 11:28
//https://leetcode.com/problems/frog-jump/submissions/
class Solution {
public:
    unordered_map<string,bool> cache;
    bool dp(int index,int prev,vector<int> &stones,unordered_map<int,int> &s){
        if(index==stones.size()-1)
            return true;
        else if(index>=stones.size())
            return false;
        
        stringstream ss;
        ss<<index<<'-'<<prev;
        string key = ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        
        
        int x = prev-1;
        bool ans  = false;
        for(x = prev -1 ; x < prev + 2 ; x++){
            if(x>0 && s.find(stones[index] + x)!=s.end()){
                ans = ans || dp(s[stones[index] + x],x,stones,s);
            }
        }
        
        return cache[key] = ans;
        
    }
    bool canCross(vector<int>& stones) {
        if(stones[0]+1!=stones[1])
            return false;
        unordered_map<int,int> s;
        for(int i = 0;i<stones.size();i++)
            s[stones[i]] = i;
        return dp(1,1,stones,s);
    }
};
