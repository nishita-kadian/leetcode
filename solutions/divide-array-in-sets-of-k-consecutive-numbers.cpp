//DIVIDE ARRAY IN SETS OF K CONSECUTIVE NUMBERS -> 02/20/2022 00:07
//https://leetcode.com/problems/divide-array-in-sets-of-k-consecutive-numbers/submissions/
class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
     map<int,int> m;
        for(int i = 0 ; i < nums.size() ; i++){
            if(m.find(nums[i])!=m.end())
                m[nums[i]]++;
            else
                m[nums[i]]=1;
        }
        while(m.size()>0){
            int min = m.begin()->first;
            for(int i = min; i <min +k; i++){
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
