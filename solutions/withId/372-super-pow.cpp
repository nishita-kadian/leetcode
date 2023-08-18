class Solution {
public:
    int findPow(int a, int b){
        a = a%1337;
        int res = 1;
        for(int i =0;i<b;i++){
            res = res*a;
            res = res%1337;
        }
        return res;
    }
    int superPow(int a, vector<int>& b) {
        int prevRes = 1;
        int tempPow = 0;
        int ans = 0;
        for(int i = 0;i<b.size();i++){
            tempPow = findPow(a,b[i]);
            tempPow = tempPow*prevRes;
            tempPow = tempPow%1337;
            ans = tempPow;
            tempPow = findPow(tempPow,10);
            prevRes = tempPow;
        }
        return ans;
    }
};