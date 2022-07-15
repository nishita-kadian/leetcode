//WORD BREAK -> 07/09/2022 14:09
//https://leetcode.com/problems/word-break/submissions/
class Solution {
public:
    unordered_map<int,bool> cache;
    bool dp(int index,string &s,set<string> &se){
        if(index>=s.length())
            return true;
        if(cache.find(index)!=cache.end())
            return cache[index];
        
        string t = "";
        for(int i =index;i<s.length();i++){
            if((se.find(s.substr(index,i-index+1))!=se.end()) && dp(i+1,s,se))
                return cache[index] = true;
            
        }
        
        return cache[index] = false;
    }
    bool wordBreak(string s, vector<string>& wordDict) {
        set<string> se;
        for(int i =0;i<wordDict.size();i++){
            se.insert(wordDict[i]);
        }
        return dp(0,s,se);
        // for(auto it = cache.begin();it!=cache.end();it++)
        //     cout<<it->first<<"      "<<it->second<<endl;
        // return ans;
    }
};



//  bool dp(int index,int x,int count,string &s, set<string> &se){
//         if(index>=s.length() && count>=1 )
//             return true;
//         if(index>=s.length() && count<1)
//             return false;
       
//         // if(index>=s.length() && count>0)
//         //     return true;
        
//         stringstream ss;
//         ss<<s.substr(x,index)<<'-'<<index<<'-'<<count;
//         string key = ss.str();
        
//         if(cache.find(key)!=cache.end())
//             return cache[key];
//         // cout<<t<<endl;
//         if(se.find(s.substr(x,index))!=se.end())
//             return cache[key] = dp(index+1,x+1,count+1,s,se) || dp(index+1,x,count,s,se) ;
//         else
//             return cache[key] = dp(index+1,x,count,s,se) && dp(index+1,x,count,s,se);
//     }
