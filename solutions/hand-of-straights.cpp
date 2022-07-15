//HAND OF STRAIGHTS -> 02/20/2022 00:03
//https://leetcode.com/problems/hand-of-straights/submissions/
class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        map<int,int> m;
        for(int i = 0 ; i < hand.size() ; i++){
            if(m.find(hand[i])!=m.end())
                m[hand[i]]++;
            else
                m[hand[i]]=1;
        }
        while(m.size()>0){
            int min = m.begin()->first;
            for(int i = min; i <min +groupSize; i++){
                if(m.find(i)==m.end()){
                    return false;
                }
                int count = m.find(i)->second;
                if(count == 1){
                    m.erase(i);
                }else{
                    m[i] = count-1;
                }
            }
        }
        return true;
        
    }
};
