//FIND THE WINNER OF AN ARRAY GAME -> 01/14/2022 13:37
//https://leetcode.com/problems/find-the-winner-of-an-array-game/submissions/
class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
        int winner = arr[0];
        int count = 0;
       
        //VERY IMPORTANT         
        
        if(k>arr.size())
            return *max_element(arr.begin(),arr.end());
        
        //         
        
        for(int i = 1 ; i<arr.size();i++){
            if(winner>arr[i])
                 count++;           
           else{
               winner = arr[i];
                count = 1 ;
           }
              
            // else{
            //     winner = arr[0];
            //     count=1;
            // }
            if(count==k)
                break;
            // int x =arr[1];
            // arr.erase(arr.begin()+1);
            // arr.push_back(x);
        }
        return winner;
    }
};
