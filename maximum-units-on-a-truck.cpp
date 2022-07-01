//MAXIMUM UNITS ON A TRUCK -> 07/01/2022 10:14
//https://leetcode.com/problems/maximum-units-on-a-truck/submissions/
class Solution {
public:
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        vector<pair<int,int>> vp;
        for(int i = 0; i < boxTypes.size() ;i++){
                // pair(no.of units,no.of boxes of this type)             
                vp.push_back(make_pair(boxTypes[i][1],boxTypes[i][0]));
        }
        int count = 0;
        sort(vp.begin(),vp.end());
        for(int i = vp.size()-1 ; i >= 0 ; i--){
            if(truckSize==0)
                break;
            if(vp[i].second<=truckSize){
                truckSize -= vp[i].second;
                count += (vp[i].second)*(vp[i].first);
            }
            else{
                count += truckSize*(vp[i].first);
                truckSize = 0; 
            }
        }
        return count;
    }
};
