//CRAWLER LOG FOLDER -> 04/25/2021 12:55
//https://leetcode.com/problems/crawler-log-folder/submissions/
class Solution {
public:
    int minOperations(vector<string>& logs) {
     
        int x = 0;
        stack<char> stk;
        int n = logs.size();
        for(int i = 0;i<n;i++)
        {
            if(logs[i]=="../" && stk.empty()==false)
            {
                stk.pop();
            }
            else if(logs[i]=="../" && stk.empty())
            {
                continue;
            }
            else if(logs[i] == "./")
            {
                continue;
            }
            else
            {
                stk.push('*');
            }
            
        }
        int t=stk.size();
        for(int i = 0 ; i<t;i++)
        {
            x++;
            stk.pop();
        }
        return x;
    }
};
