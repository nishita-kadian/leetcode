//WORD PATTERN -> 01/20/2022 20:03
//https://leetcode.com/problems/word-pattern/submissions/
class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> stringWithoutSpace;
        
        string te ="";
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i]==' '){
                stringWithoutSpace.push_back(te);
                te = "";
            }
            else
                te+=s[i];
        }
        stringWithoutSpace.push_back(te);
        
        map<char, string> bijectionMapping;
        map<string, char> reverseMapping;
        bool matches = true;
        
        for(int i = 0;i < pattern.size();++i){
            if(stringWithoutSpace.size() <= i)
                matches = false;
            else if(bijectionMapping.find(pattern[i]) != bijectionMapping.end() || reverseMapping.find(stringWithoutSpace[i]) != 
                reverseMapping.end()){
                if(stringWithoutSpace[i] != bijectionMapping[pattern[i]] || reverseMapping[stringWithoutSpace[i]] != pattern[i])
                    matches = false;
            }
            else{
                bijectionMapping[pattern[i]] = stringWithoutSpace[i];
                reverseMapping[stringWithoutSpace[i]] = pattern[i];
            }
        }
        
        return (pattern.size() == stringWithoutSpace.size()) & matches;  
    }
};
