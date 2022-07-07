//INTERLEAVING STRING -> 07/07/2022 11:43
//https://leetcode.com/problems/interleaving-string/submissions/
class Solution {
public:
    unordered_map<string,bool> cache;
    bool dp(int i,int j,int k,string &s1,string &s2, string&s3){
        if(i>=s1.size() && j>=s2.size() && k>=s3.size()){
            return true;
        }
        if(s1[i]!=s3[k] && s2[j]!=s3[k])
            return false;
        stringstream ss;
        ss<<i<<'-'<<j<<'-'<<k;
        string key = ss.str();
        
        if(cache.find(key)!=cache.end())
            return cache[key];
        
        if(i<s1.size() && j<s2.size() && k<s3.size() && s1[i]==s2[j] && s1[i] == s3[k]){
            return cache[key] = dp(i+1,j,k+1,s1,s2,s3) || dp(i,j+1,k+1,s1,s2,s3);
        }
        else if(i<s1.size() && k<s3.size() && s1[i]==s3[k])
            return cache[key] = dp(i+1,j,k+1,s1,s2,s3);
        else if(j<s2.size() && k<s3.size() && s2[j]==s3[k])
            return cache[key] = dp(i,j+1,k+1,s1,s2,s3);
        return cache[key];
    }
    
    bool isInterleave(string s1, string s2, string s3) {
        return dp(0,0,0,s1,s2,s3);
    }
};
    
    
    
//     if(s3.size() != (s1.size()+s2.size()))
//             return false;
//         int i = 0;
//         int j = 0;
//         int k = 0;
//         while((i<s1.size() || j<s2.size()) || k!=s3.size()-1){
//             if(i<s1.size() && k<s3.size() && s3[k]==s1[i]){
//                 while(i<s1.size() && k<s3.size() && s3[k]==s1[i]){
//                     i++;
//                     k++;
//                 }
//                 continue;
//             }
//             else if(j<s2.size() && k<s3.size() && s3[k]==s2[j]){
//                 while(j<s2.size() && k<s3.size() && s3[k]==s2[j]){
//                     j++;
//                     k++;
//                 }
//                 continue;
//             }
//             else
//                 break;
            
//         }
//         if(k==s3.size() && i==s1.size() && j==s2.size())
//             return true;
//         else 
//             return false;
        
//     }
