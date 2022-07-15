//CANDY -> 07/04/2022 15:27
//https://leetcode.com/problems/candy/submissions/
class Solution {
public:
    int candy(vector<int>& ratings) {
        vector<int> candies(ratings.size(),1);
        int size = ratings.size();
        int count = 0;
        for(int i = 1 ; i < size ;i++){
            if(ratings[i]>ratings[i-1])
                candies[i] = candies[i-1]+1;
        }
        for(int i = size-1 ; i > 0 ; i--){
            if(ratings[i-1]>ratings[i])
                candies[i-1] = max(candies[i]+1,candies[i-1]);
        }
        for(int i = 0 ; i < size ; i++){
            count+=candies[i];
        }
        return count;
    }
};
