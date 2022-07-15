//SIMPLIFIED FRACTIONS -> 02/15/2022 16:19
//https://leetcode.com/problems/simplified-fractions/submissions/
class Solution {
public:
    vector<string> simplifiedFractions(int n) {
        vector<string> ans;
            for(int k = 2 ; k <= n ; k++){
                for(int p = 1 ; p < n ; p++){
                    if(gcd(p,k)==1 && k>p)
                        ans.push_back(to_string(p) + "/" + to_string(k));
                    else if(k%p==0 && p==1)
                        ans.push_back(to_string(p) + "/" + to_string(k));
                }
            }
        return ans;
    }
};
