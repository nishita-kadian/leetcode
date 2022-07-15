//LEMONADE CHANGE -> 07/03/2022 23:38
//https://leetcode.com/problems/lemonade-change/submissions/
class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        if(bills[0]!=5)
            return false;
        unordered_map<int,int> m;
        for(int i = 0;i<bills.size();i++){
            if(m.find(bills[i])!=m.end())
                m[bills[i]]++;
            else
                m[bills[i]] = 1;
            if(bills[i]>5){
                if(m[5]<=0)
                    return false;
                else
                {
                    if(bills[i]==10){
                        if(m[5]>=1)
                            m[5]--;
                        else 
                            return false;
                    }
                    else if(bills[i]==20){
                        if(m[10]>=1){
                            m[10]--;
                            if(m[5]>=1)
                                m[5]--;
                            else
                                return false;
                        }
                        else{
                            if(m[5]>=3)
                                m[5]-=3;
                            else
                                return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
