class Solution {
public:
    bool reorderedPowerOf2(int n) {
        string num = to_string(n);
        sort(num.begin(),num.end());
        for(int i = 0 ; i < 32 ; i++){
            string pow2 = to_string(1<<i);
            sort(pow2.begin(),pow2.end());
            if(num==pow2)
                return true;
        } 
        return false;
    }
};