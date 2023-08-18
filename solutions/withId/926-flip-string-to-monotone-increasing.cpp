class Solution {
public:
    int minFlipsMonoIncr(string s) {
        vector<int> onesInLeft(s.length(),0);
        vector<int> zerosInRight(s.length(),0);
        int ones = 0;
        for(int i =0;i<s.length();i++){
            if(s[i]=='1'){
                ones++;
            }
            onesInLeft[i] = ones;
        }
        int zeros = 0;
        for(int i = s.length()-1;i>=0;i--){
            if(s[i]=='0')
                zeros++;
            zerosInRight[i] = zeros;
        }
        int ans = INT_MAX;
        for(int cut = 0;cut<s.length()-1;cut++){
            ans = min(ans,onesInLeft[cut]+zerosInRight[cut+1]);
        }
       
        ans = min(ans,zerosInRight[0]);
        
        
        ans = min(ans,onesInLeft[s.length()-1]);
        if(ans==INT_MAX)
            return 0;
        return ans;
    }
};