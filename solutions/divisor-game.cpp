//DIVISOR GAME -> 06/30/2022 23:28
//https://leetcode.com/problems/divisor-game/submissions/
class Solution {
public:
    unordered_map<string,bool> cache;
    bool dp(int index,int n,bool x){
        if(index==0)
            return true;
        if(index==n)
            return x;
        // if(index==n && x==false)
        //     return x;
        
        stringstream ss;
        ss<<index<<'-'<<n<<'-'<<x;
        string key = ss.str();
        if(cache.find(key)!=cache.end())
            return cache[key];
        for(int i = 1; i<n ;i++){
            
            if(n%i==0)
                cache[key] = dp(1,n-i,!x);
        }
        if(x==true)
            return true;
        else
            return false;
    }
    bool divisorGame(int n) {
        if(n%2==0)
            return dp(1,n,true);
        else
            return dp(1,n,false);
    }
};
