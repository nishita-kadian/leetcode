//LAST STONE WEIGHT -> 08/26/2021 21:18
//https://leetcode.com/problems/last-stone-weight/submissions/
class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
     priority_queue<int> pq;
     
     for(int i = 0 ; i < stones.size() ; i++)
     {
        pq.push(stones[i]);
     }
        
        
        int x = 0;
        int y = 0;
        while(pq.size()>1 )
        {
            x = 0;
            y = 0;
            x=pq.top();
            
            pq.pop();
            y = pq.top();
            pq.pop();
            
                        
            // if(x==y)
            // {
            //     stones.erase(stones.begin()+xi);
            //     stones.erase(stones.begin()+yi);
            // }
            if(x != y)
            {
                int z = abs(x-y);
                pq.push(z);
            }
//             else if(x<y)
//             {
//                 int z = y-x;
//                 stones.erase(stones.begin()+xi);
//                 stones[yi] = z;
//             }            
        }
        if(pq.size()==1)
           return pq.top();
        else
            return 0;
    }
};
