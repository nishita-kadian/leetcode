class Solution {
public:
    int subarrayBitwiseORs(vector<int>& arr) {
        vector<int> res; //it will store all possible XORs 
        int left = 0;
        int right; // these 2 are the indices to iterate over res and XOR previously calculated XOR with 1 element further
        
        for(int i = 0;i<arr.size();i++){
            int right = res.size();
            res.push_back(arr[i]);
            
            for(int j = left;j<right;j++){
                if(res.back() != (res[j] | arr[i]))
                    res.push_back(res[j] | arr[i]);
            }
            left = right;
        }
        
        set<int> s;
        for(int i = 0;i<res.size();i++){
            s.insert(res[i]);
        }
        return s.size();
    }
};