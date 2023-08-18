class Solution {
public:
    int hammingDistance(int x, int y) {
        x = x^y;
        int ans  = 0;
        while(x>0){
            if(x&1 == 1)
                ans++;
            x = x>>1;
        }
        return ans;
    }
};

// or could use  return __builtin_popcount(x^y);