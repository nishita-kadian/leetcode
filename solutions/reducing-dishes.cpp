//REDUCING DISHES -> 07/12/2022 22:40
//https://leetcode.com/problems/reducing-dishes/submissions/
class Solution {
public:
    unordered_map<string, int> cache;
    int dp(int index, int count, vector<int> &satisfaction){
        if(index>=satisfaction.size())
            return 0;
        
        stringstream ss;
        ss<<index<<'-'<<count;
        string key = ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        
        return cache[key] = max(satisfaction[index]*count+dp(index+1,count+1,satisfaction),dp(index+1,count,satisfaction));
        
        
    }
    int maxSatisfaction(vector<int>& satisfaction) {
        sort(satisfaction.begin(),satisfaction.end());
        return dp(0,1,satisfaction);
    }
};
