//NUMBER OF OPERATIONS TO MAKE NETWORK CONNECTED -> 06/22/2022 13:31
//https://leetcode.com/problems/number-of-operations-to-make-network-connected/submissions/
class Solution {
public:
     //Find Parent function
    int find(int x, vector<int>& parent) {
        if (parent[x] == x) return parent[x];
        return parent[x] = find(parent[x], parent);
    }
    
    //Main Problem Solver Function
    int makeConnected(int n, vector<vector<int>>& connections) {
        
        //Initializing parent array with their own parent values
        vector<int> parent(n);
        for(int i=0; i<n; i++){
            parent[i] = i;
        }
        
        //For counting components
        int compo = 0;
        
        for (auto& it: connections) {
            int x = find(it[0], parent);
            int y = find(it[1], parent);
            
            //If parent are same that means they were connected and now again they are being connected so continue/skip
            if (x == y){
                continue;
            }
            
            //If Parent not same, then Union them and increment compo.
            else {
                parent[y] = x; //union
                compo++;
            }
        }
        
        //We know to connect n computers we need n-1 cables so if connections.size() < n-1 return -1
        //else required - already connected and i.e. (n-1) - (components)
        return connections.size() < n-1 ? -1 : n-1-compo;
    }
};
