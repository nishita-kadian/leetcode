//MINIMUM INDEX SUM OF TWO LISTS -> 08/06/2021 16:51
//https://leetcode.com/problems/minimum-index-sum-of-two-lists/submissions/
class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
       map<string,int> m;
        vector<string> v;
        for(int i = 0 ; i < list1.size();i++)
        {
            m[list1[i]] = i;
            
        }
        map<int,vector<string> > ans;
        for(int i = 0 ; i < list2.size();i++)
        {
            if(m.find(list2[i])!=m.end())
            {
                ans[i+m[list2[i]]].push_back(list2[i]);
            }
        }
        auto it = ans.begin();
        return it->second;
    }
};
