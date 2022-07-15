//KIDS WITH THE GREATEST NUMBER OF CANDIES -> 12/19/2020 20:05
//https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/submissions/
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool>tf(candies.size(),false);
        int max=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++)
        {
            if(candies[i]+extraCandies>=max)
            {
                tf[i]=true;
            }
           
        }
        return tf;
        
    }
};
