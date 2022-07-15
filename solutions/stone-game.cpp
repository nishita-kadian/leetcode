//STONE GAME -> 07/10/2022 19:10
//https://leetcode.com/problems/stone-game/submissions/
class Solution {
public:
    
    // maintain ek hi sum ---> A < B ---> A-B < 0 --->
    
    /**
        Win condition is
        Sum of Alice > sum of Bob
        Which can be written as A>B
        Which is A-B>0
        So you need to maintain only 1 variable instead of 2 which is the difference of piles each player has
    **/
    
    unordered_map<string,bool> cache;
    bool dp(int start,int end,int stonesAlice,int stonesBob,bool alice,vector<int>& piles){
        if(start>=end)
            return stonesAlice > stonesBob;
        
        stringstream ss;
        ss<<start<<'-'<<end<<'-'<<stonesBob<<'-'<<alice;
        string key = ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        
        if(alice)
            return cache[key] = (piles[start] + dp(start+2,end,stonesAlice+piles[start],stonesBob-piles[start],!alice,piles)) ||
                                    (piles[end] + dp(start,end-2,stonesAlice+piles[end],stonesBob-piles[end],!alice,piles));
        else
            return cache[key] = (dp(start+1,end,stonesAlice,stonesBob,!alice,piles)) ||
                                    (dp(start,end-1,stonesAlice,stonesBob,!alice,piles));
            
    }
    bool stoneGame(vector<int>& piles) {
        int x  = 0;
        for(int i = 0;i<piles.size();i++)
            x+=piles[i];
        return dp(0,piles.size()-1,0,x,true,piles);
        
    }
};
