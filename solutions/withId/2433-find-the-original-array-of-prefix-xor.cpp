class Solution {
public:
    vector<int> findArray(vector<int>& pref) {
        int ans = pref[0];
        for(int i = 1;i < pref.size() ;i++){
            ans^=pref[i];
            int temp = pref[i];
            pref[i] = ans;
            ans = temp;
        }
        return pref;
    }
};