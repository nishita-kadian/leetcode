//LARGEST NUMBER -> 07/06/2022 01:38
//https://leetcode.com/problems/largest-number/submissions/
 bool f(string s1, string s2){
        return (s1+s2) < (s2+s1);
}
class Solution {
public:
   
    string largestNumber(vector<int>& nums) {
    vector<string> s;
        for(int i = 0;i<nums.size();i++){
            s.push_back(to_string(nums[i]));
        }
        sort(s.begin(),s.end(),f);
        string ans;
        for(int i=s.size()-1;i>=0;i--)
            ans+=s[i];
        bool x = true;
        for(int i =0;i<ans.size();i++){
            if(ans[i]!='0')
                x = false;break;
        }
        if(x==true)
            return "0";
        return ans;
    }
};
