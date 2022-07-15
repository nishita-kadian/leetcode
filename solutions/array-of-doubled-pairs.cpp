//ARRAY OF DOUBLED PAIRS -> 07/03/2022 22:34
//https://leetcode.com/problems/array-of-doubled-pairs/submissions/
class Solution {
public:
    static bool compare(int &x, int&y){
        return abs(x) < abs(y);
    }
    bool canReorderDoubled(vector<int>& arr) {
        if(arr.size()==0)
            return true;
      
        unordered_map<int,int> m;
        for(int i = 0;i<arr.size();i++){
            if(m.find(arr[i])!=m.end())
                m[arr[i]]++;
            else
                m[arr[i]] = 1;
        }
        
        sort(arr.begin(), arr.end(), compare);
 
        for(int i = 0;i<arr.size();i++){
            if(m.find(2*arr[i])!=m.end()){
                if(m[2*arr[i]] < m[arr[i]])
                    return false;
                    
                m[2*arr[i]] -= m[arr[i]];
                m[arr[i]] = 0;
                
            }
        }
        for(auto i = m.begin();i!=m.end();i++){
            if(i->second > 0)
                return false;
        }
    
        return true;
    }
};
