//CAN PLACE FLOWERS -> 01/18/2022 23:03
//https://leetcode.com/problems/can-place-flowers/submissions/
class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int count = 0;
        bool ans = false;
        for(int i = 0 ; i < flowerbed.size() ; i++){
            if(flowerbed[i]==0 && (i == 0 || flowerbed[i-1]==0) && (i==flowerbed.size()-1 || flowerbed[i+1]==0)){
                flowerbed[i]=1;
                count++;
            }
            if(count>=n)
                return true;   
        }         
        return false;
    }
};

