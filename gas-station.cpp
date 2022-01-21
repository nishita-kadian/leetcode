//GAS STATION -> 01/21/2022 23:23
//https://leetcode.com/problems/gas-station/submissions/
class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int ans = 0;
        int tGas = 0;
        int tCost = 0;
        for(int i = 0 ; i< gas.size() ; i++){
            tGas += gas[i];
            tCost += cost[i]; 
        }
        if(tGas < tCost)
            return -1;
     int start = 0;
     bool traversed = false;
        for(int i = 0 ; i < gas.size() ; i++){
            if(gas[i]>=cost[i])
                start = i; 
            else
                continue;
            int j = start;
            int fuel = gas[j]-cost[j];
            j++;
            while((j%gas.size())!=start && fuel > 0){
                if(fuel>=0){
                    fuel += gas[j%gas.size()]-cost[j%gas.size()];
                    j++;
                }
                else{
                    traversed = false;
                    break;
                }
            }
            if(j%gas.size() == start)
                traversed = true;
            if(traversed){
                ans = start;
                break;
            }
        }
        return ans;
    }   
};
