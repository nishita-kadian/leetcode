//GROUP ANAGRAMS -> 12/19/2021 23:15
//https://leetcode.com/problems/group-anagrams/submissions/
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> temp = strs;
        for(int i = 0 ; i < strs.size() ; i++){
            sort(temp[i].begin(),temp[i].end());
        }   
        map<string,vector<int>> m;
        for(int i = 0 ; i < strs.size() ; i++){
            if(m.find(temp[i])!=m.end())
                m[temp[i]].push_back(i);
            else
                m[temp[i]] = vector<int>(1,i);
        }
        for(auto it  = m.begin() ; it != m.end() ; it++){
            vector<string> v;
            for(int j = 0 ; j < it->second.size() ; j++){
                v.push_back(strs[it->second[j]]);
            }
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};
