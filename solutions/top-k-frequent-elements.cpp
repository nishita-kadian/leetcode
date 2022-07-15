//TOP K FREQUENT ELEMENTS -> 12/07/2021 19:04
//https://leetcode.com/problems/top-k-frequent-elements/submissions/
class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int> > p;
        unordered_map<int,int> m;
        vector<int> ans;
        for(int i = 0 ; i< nums.size() ; i++)
        {
            if(m.find(nums[i])!=m.end())
                m[nums[i]] += 1;
            else
                m[nums[i]] = 1;
        }
        for(auto it = m.begin(); it != m.end() ; it++)
        {
            p.push(make_pair(it->second,it->first));
            // cout<<i->first<<" "<<i->second<<endl;
        }
        while(k>0)
        {
            ans.push_back((p.top()).second);
            p.pop();
            k--;
        }
        return ans;
    }
};
