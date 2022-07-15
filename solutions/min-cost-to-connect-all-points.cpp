//MIN COST TO CONNECT ALL POINTS -> 07/07/2022 21:15
//https://leetcode.com/problems/min-cost-to-connect-all-points/submissions/
class Solution {
public:
    
//  PRIMS 
    
    int minCostConnectPoints(vector<vector<int>>& points) {
         int n = points.size();
        
        // Min-heap to store minimum weight edge at top.
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;
        
        // Track nodes which are included in MST.
        set<int> inMST;
        // vector<bool> inMST(n);
        
        heap.push({ 0, 0 });
        int mstCost = 0;
        int edgesUsed = 0;
        
        while (inMST.size()<points.size()) {
            pair<int, int> topElement = heap.top();
            heap.pop();
            
            int weight = topElement.first;
            int currNode = topElement.second;
            
            // If node was already included in MST we will discard this edge.
            if (inMST.find(currNode)!=inMST.end()) {
                continue;
            }
            
            inMST.insert(currNode);
            mstCost += weight;
            edgesUsed++;
            
            for (int nextNode = 0; nextNode < n; ++nextNode) {
                // If next node is not in MST, then edge from curr node
                // to next node can be pushed in the priority queue.
                if (inMST.find(nextNode)==inMST.end()) {
                    int nextWeight = abs(points[currNode][0] - points[nextNode][0]) + 
                                     abs(points[currNode][1] - points[nextNode][1]);
                    
                    heap.push({ nextWeight, nextNode });
                }
            }
        }
        
        return mstCost;
        
        

    }
};

