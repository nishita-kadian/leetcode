//MINIMUM DELETIONS TO MAKE CHARACTER FREQUENCIES UNIQUE -> 06/29/2022 11:55
//https://leetcode.com/problems/minimum-deletions-to-make-character-frequencies-unique/submissions/
class Solution {
public:
    int minDeletions(string s) {
        unordered_set<int> se;
        sort(s.begin(),s.end());
        char temp = s[0];
        int count  = 0;
        int ans = 0;
        for(int i = 0 ; i < s.length() ; i++){
            if(temp==s[i])
                count++;
            else{
                if(se.find(count)==se.end())
                    se.insert(count);
                else{
                    while(se.find(count)!=se.end()){
                        count--;
                        ans++;
                    }
                    if(count!=0)
                        se.insert(count);
                }
                temp = s[i];
                count = 0;
                i--;
            }
        }
         if(se.find(count)==se.end())
                    se.insert(count);
        else{
            while(se.find(count)!=se.end()){
                count--;
                ans++;
            }
            if(count!=0)
                se.insert(count);
        }
        return ans;
    }
};
