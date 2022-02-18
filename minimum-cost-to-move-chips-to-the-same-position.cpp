//MINIMUM COST TO MOVE CHIPS TO THE SAME POSITION -> 02/18/2022 11:55
//https://leetcode.com/problems/minimum-cost-to-move-chips-to-the-same-position/submissions/
class Solution {
public:
    int minCostToMoveChips(vector<int>& position) {
        int cost = 0;
        // map<int,int>pos;
        // for(int i = 0 ; i < position.size() ;i++){
        //     if(pos.find(position[i])!=pos.end())
        //         pos[position[i]]++;
        //     else
        //         pos[position[i]] = 1;
        // }
        int even = 0;
        int odd  = 0;
        for(int i = 0 ; i<position.size();i++){
            if(position[i]%2==0)
                even++;
            else
                odd++;
        }
        // for(auto it = pos.begin();it!=pos.end();it++){
        //     if(it->first%2==0)
        //         even+=it->second;
        //     else
        //         odd+=it->second;
        // }
        if(even==position.size() || odd==position.size())
            return 0;
        
        return min(even,odd);
        
    }
};
