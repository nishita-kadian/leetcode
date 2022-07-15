//RABBITS IN FOREST -> 02/19/2022 13:54
//https://leetcode.com/problems/rabbits-in-forest/submissions/
class Solution {
public:
    int numRabbits(vector<int>& answers) {
    unordered_map<int,int> m;
        for(int i = 0 ; i < answers.size() ; i++){
            if(m.find(answers[i])!=m.end())
                m[answers[i]]++;
            else
                m[answers[i]] = 1;
        }
        int ans = 0;
        for(auto it = m.begin() ; it != m.end() ; it++){
            if(it->first==0)
            {
                ans+=it->second;
            }
            else if(it->first+1<it->second)
            {
                int p=it->second%(it->first+1);
                int k=it->second/(it->first+1);
                ans+=k*(it->first + 1);
                if(p!=0)
                {
                    ans+= it->first+1;
                }
                
            }
                else
                {
                    ans+=it->first+1;
                }
            }
            // // if(it->first==1 && it->second>2)
            // //     ans+=it->second-2+1; 
            // if((it->second)%(it->first+1)==0)
            //     ans+=it->second;
        
        return ans;
    }
};
