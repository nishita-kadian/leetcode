//REMOVE ALL ADJACENT DUPLICATES IN STRING II -> 05/06/2022 11:33
//https://leetcode.com/problems/remove-all-adjacent-duplicates-in-string-ii/submissions/
class Solution {
public:
    string removeDuplicates(string s, int k) {
        stack<pair<char,int>> st;
        string ans ="";
        for(int i = 0 ; i <s.length();i++){
            if(!st.empty() && st.top().first==s[i])
                st.top().second++;
            else
                st.push({s[i],1});
            if(st.top().second==k)
                st.pop();
        }
        while(!st.empty()){
            while(st.top().second!=0){
                ans += st.top().first;
                st.top().second--;
            }
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};
