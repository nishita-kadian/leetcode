//DISTRIBUTE CANDIES TO PEOPLE -> 07/04/2022 17:57
//https://leetcode.com/problems/distribute-candies-to-people/submissions/
class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
        
        for(int i = 0;candies>0;i++,candies-=i){
            ans[i%num_people] += min(i+1,candies);        
        }
        return ans;
    }
};
