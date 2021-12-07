//REDUCE ARRAY SIZE TO THE HALF -> 12/07/2021 14:52
//https://leetcode.com/problems/reduce-array-size-to-the-half/submissions/
class Solution {
public:
    int minSetSize(vector<int>& arr) {
        priority_queue<int> p;
        map<int,int> m;
        // cout<<arr.size()<<endl;
        for(int i = 0 ; i < arr.size() ; i++)
        {
            if(m.find(arr[i])!=m.end())
            {
                m[arr[i]] += 1;
            }
            else
                m[arr[i]] = 1;
        }
        for(auto it = m.begin() ; it!=m.end() ; it++)
        {
            p.push(it->second);
            // cout<<it->first<<"  "<<it->second<<endl;
        }
        // cout<<p.size();
        int x = 0;
        int count =0;
        for(int i = 0 ; i < p.size() ;i++)
        {
            if(x >= (arr.size()/2))
                break;
            else{
                x += p.top();
                p.pop();
                count++;
                // cout<<x<<" "<<count<<endl;
            }
        }
        return count;
    }
};
