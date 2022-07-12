//MAXIMUM POPULATION YEAR -> 07/12/2022 16:13
//https://leetcode.com/problems/maximum-population-year/submissions/
class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
       int max = 0, earliest_year;
        vector<int> years(101);
        for(vector<int> log : logs){
            for(int year = log[0]; year< log[1]; year++)
                years[year - 1950]++;
        }
        for(int year=0 ; year <= 100; year++){
            if(years[year] > max){
                max = years[year] ;
                earliest_year = year;
            }            
        }
        return earliest_year + 1950;
        
        
        // sort(logs.begin(),logs.end());
        // vector<int> years(logs[logs.size()][1]-logs[0][0]+1,0);
        // for(int i = 0 ; i < logs.size();  i++){
        //     for(int j = logs[i][0] ; j < logs[i][1] ; j++){
        //         years[j-logs[0][0]]++;           
        //     }
        // }
        // int ans  = INT_MAX;
        // int maxi = *max_element(years.begin(),years.end()); 
        // for(int i =0;i<years.size();i++){
        //     if(years[i] > maxi){
        //         maxi = years[i] ;
        //         ans = i+logs[0][0];
        //     }                }
        // return ans;
    }
};
