class Solution {
public:
    int minBitFlips(int start, int goal) {
        string strt = bitset<32>(start).to_string();
        string end = bitset<32>(goal).to_string();
        int ans = 0;
        for(int i = 0;i<strt.size();i++){
            if(strt[i]!=end[i]){
                ans++;
            }
        }
        return ans;
    }
};