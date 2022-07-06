//COUNT NUMBER OF TEAMS -> 07/06/2022 10:27
//https://leetcode.com/problems/count-number-of-teams/submissions/
class Solution {
public:    
             // GOOD DP SOLUTIONS BUT TLE COMES // 
            //so did it with brute force because constraints were small//
    
//      unordered_map<string,int> cache;
 //     int dp(int index,int prev,bool &greater,int count,vector<int> &rating){
//         if(index>=rating.size() || count>=3 )
//             return 0;
//         stringstream ss;
//         ss<<index<<'-'<<prev<<'-'<<count;
//         string key = ss.str();
        
//         if(cache.find(key)!=cache.end())
//             return cache[key]; 
        
//         if(greater){
//             if(rating[index]>rating[prev]){
//                 if(count+1==3)
//                     return cache[key] = 1 + dp(index+1,index,greater,count+1,rating)+
//                                             dp(index+1,prev,greater,count,rating);
//                 else
//                     return cache[key] = dp(index+1,index,greater,count+1,rating)+
//                                             dp(index+1,prev,greater,count,rating);
//             }
//             else
//                 return cache[key] = dp(index+1,prev,greater,count,rating);
//         }
        
//         else{
//             if(rating[index]<rating[prev]){
//                 if(count+1==3)
//                     return cache[key] = 1 + dp(index+1,index,greater,count+1,rating)+
//                                             dp(index+1,prev,greater,count,rating);
//                 else
//                     return cache[key] = dp(index+1,index,greater,count+1,rating)+
//                                             dp(index+1,prev,greater,count,rating);
//             }
//             else
//                 return cache[key] = dp(index+1,prev,greater,count,rating);
//         }
//         return cache[key];   
    // }
    int numTeams(vector<int>& rating) {
        int teams = 0;
        for(int i = 1;i<rating.size()-1;i++){
            int leftLess=0,leftGreater=0,rightLess=0,rightGreater=0;
            for(int j = 0;j<i;j++){
                if(rating[j]>rating[i])
                    leftGreater++;
                else 
                    leftLess++;
            }
            for(int j=i+1;j<rating.size();j++){
                if(rating[j]>rating[i])
                    rightGreater++;
                else 
                    rightLess++;
            }
            teams += (leftGreater*rightLess) + (rightGreater*leftLess);
        }
         
        return teams;
        
//         long long ans  = 0;
//         bool greater = true;
//         cache.clear();
//         ans+=dp(0,0,greater,0,rating);
//         ans+=dp(1,0,greater,1,rating);
//         cache.clear();
//         greater = false;
//         ans+=dp(0,0,greater,0,rating);
//         ans+=dp(1,0,greater,1,rating);
//         return ans;
        
    }
};
