//FIND THE WINNER OF THE CIRCULAR GAME -> 11/07/2021 12:48
//https://leetcode.com/problems/find-the-winner-of-the-circular-game/submissions/
class Solution {
public:
    vector<int> vec(int n ,int k)
    {
        return vector<int>(n,1);
    }
     vector<int> zxc(int n,int k,vector<int>& vo,int y,int m)
     {
         if(n==1)
             return vo;
         int count = 0;
         for(int i = m ; ; i++)
         {
             if(vo[i%y]==1)
                 count++;
             if(count==k){
                 vo[i%y]=0;
                 count = 0;
                 m = i%y;
                 break;
             }
         }
         // m = (m+k)%y;
         // vo[m] = 0;
         zxc(n-1,k,vo,y,m);
         return vo;
    }
    int findTheWinner(int n, int k) {
        vector<int> vo = vec(n,k);
        int y = n;
        int m =1;
        int ans = 0;
        zxc(n,k,vo,y,0);
        int s = vo.size();
        for(int i = 0 ; i<s ; i++)
        {
            if(vo[i]==1)
                 ans =i+1;
        }
        return ans;
    }
};
