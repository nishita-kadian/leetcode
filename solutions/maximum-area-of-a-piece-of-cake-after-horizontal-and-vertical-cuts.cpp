//MAXIMUM AREA OF A PIECE OF CAKE AFTER HORIZONTAL AND VERTICAL CUTS -> 07/02/2022 12:28
//https://leetcode.com/problems/maximum-area-of-a-piece-of-cake-after-horizontal-and-vertical-cuts/submissions/
class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        int x = INT_MIN;
        int y = INT_MIN;
        int M = 1000000007;
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        long ans  =  0;
        if(horizontalCuts.size()==0){
            y = h;
            if(verticalCuts.size()==0)
                x = w;
            else if(verticalCuts.size()==1)
                x = max(abs(verticalCuts[0]-0),abs(w-verticalCuts[0]));
            else{
                for(int i =0;i<verticalCuts.size()-1;i++){
                    x = max(x,abs(verticalCuts[i+1]-verticalCuts[i]));
                }    
            }
            // cout<<x<<" "<<y<<endl; 
            return ((long)y*x)%(int)M;
        }
        else if(horizontalCuts.size()==1){
            y = max(abs(horizontalCuts[0]-0),abs(h-horizontalCuts[0]));
            if(verticalCuts.size()==0)
                x = w;
            else if(verticalCuts.size()==1)
                x = max(abs(verticalCuts[0]-0),abs(w-verticalCuts[0]));
            else{
                for(int i =0;i<verticalCuts.size()-1;i++){
                    x = max(x,abs(verticalCuts[i+1]-verticalCuts[i]));
                }
            }
            cout<<x<<" "<<y<<endl; 
            return ((long)y*x)%(int)M;
        }
        
        else{
            for(int i =0;i<horizontalCuts.size()-1;i++){
                y = max(y,abs(horizontalCuts[i+1]-horizontalCuts[i]));
            }
            if(verticalCuts.size()==0)
                x = w;
            else if(verticalCuts.size()==1)
                x = max(abs(verticalCuts[0]-0),abs(w-verticalCuts[0]));
            else{
                for(int i =0;i<verticalCuts.size()-1;i++){
                    x = max(x,abs(verticalCuts[i+1]-verticalCuts[i]));
                }
            }
            cout<<x<<" "<<y<<endl; 
            ans = ((long)x*y);
            
        }
        return ans%(int)M;
    }
};
