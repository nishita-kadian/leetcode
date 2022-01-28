//TO LOWER CASE -> 01/28/2022 00:18
//https://leetcode.com/problems/to-lower-case/submissions/
class Solution {
public:
    string toLowerCase(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        return s;
    }
};
