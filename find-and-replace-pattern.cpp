//FIND AND REPLACE PATTERN -> 12/28/2021 01:05
//https://leetcode.com/problems/find-and-replace-pattern/submissions/
class Solution {
public:
    vector<string> findAndReplacePattern(vector<string>& words, string pattern) {
        unordered_map<int,vector<int>> p1;
        vector<string> ans;
        for(int i = 0 ; i < pattern.size() ; i++){
            if(p1.find(pattern[i])!=p1.end())
                p1[pattern[i]].push_back(i);
            else 
                p1[pattern[i]] = vector<int>(1,i);
        }    
        // for(auto it = p1.begin();it!=p1.end();it++){
        //     cout<<it->first<<" "<<it->second.size()<<endl;
        // }
        for(int i = 0 ; i < words.size() ; i++){
            bool b = true;
            string ele = words[i];
            unordered_map<int,vector<int>> e1;
            for(int j = 0 ; j < ele.size() ; j++){
            if(e1.find(ele[j])!=e1.end())
                e1[ele[j]].push_back(j);
            else 
                e1[ele[j]] = vector<int>(1,j);
            }
            for(int k= 0,j =0;k<pattern.size();k++,j++){
                if(p1[(int)pattern[k]]!= e1[(int)ele[j]]){
                    b = false;
                    break;
                }
            }
            if(b == true)
                ans.push_back(words[i]);
            
        }
        return ans;
    }
};
