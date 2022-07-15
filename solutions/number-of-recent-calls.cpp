//NUMBER OF RECENT CALLS -> 04/29/2021 12:53
//https://leetcode.com/problems/number-of-recent-calls/submissions/
class RecentCounter {
public:
    queue<int> q;
    RecentCounter() {
    
        
        
    }
    
    int ping(int t) {
       while(q.empty()==false && t-q.front() > 3000)
        {
            q.pop();
        }
        q.push(t);
        return q.size();
        
        
    }
};

/**
 * Your RecentCounter object will be instantiated and called as such:
 * RecentCounter* obj = new RecentCounter();
 * int param_1 = obj->ping(t);
 */
