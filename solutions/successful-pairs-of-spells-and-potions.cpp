//SUCCESSFUL PAIRS OF SPELLS AND POTIONS -> 07/04/2022 10:16
//https://leetcode.com/problems/successful-pairs-of-spells-and-potions/submissions/
class Solution {
public:
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        vector<int> ans;
        int n = potions.size();
        int m = spells.size();
        sort(potions.begin(),potions.end());
        for(int i =0;i<m;i++){
            int l = 0;
            int r  = n-1;
            int mid = (l+r)/2;
            while(l<=r){
                if((long long)spells[i]*potions[mid]>=success){
                    r = mid-1;
                    mid = (l+r)/2;
                }
                else{
                    l = mid+1;
                    mid = (l+r)/2;
                }
            }
            cout<<r<<endl;
            ans.push_back(n-1-r);
        }
     return ans;
    }
};
