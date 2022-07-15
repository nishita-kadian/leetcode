//BUILD AN ARRAY WITH STACK OPERATIONS -> 04/23/2021 17:20
//https://leetcode.com/problems/build-an-array-with-stack-operations/submissions/
class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
    stack<int> stk;
        vector<string> v;
        int j = 0;
        int a = 0;
        for(int i = 1 ; i <= n ; i++)
        {
        
            if(a==target.size())
            {
                break;
            }
            if(target[a] == i)
            {
                stk.push(i);
                v.push_back("Push");
                
                a++;
            }
            else
            {
                stk.push(i);
                stk.pop();
                v.push_back("Push");
                
                v.push_back("Pop");
                
            }
            
        }
        return v;
    }
};
