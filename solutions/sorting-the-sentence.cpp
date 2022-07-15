//SORTING THE SENTENCE -> 07/09/2021 16:35
//https://leetcode.com/problems/sorting-the-sentence/submissions/
class Solution {
public:
    string sortSentence(string s) {
        string sol="";
        int count =0;
        for(int i = 0 ; i<s.length();i++)
        {
            if(s[i]==' ')
            {
                count++;
            }
        }
        vector<string> vec(count+1);
        string str = "";
        for(int i = 0 ; i < s.length() ; i++ )
        {
            if(s[i]>=48 && s[i]<=57){
                vec[(s[i]-48)-1] = str;
            }
            else if(s[i]==' ')
            {
                str = "";
            }
            else{
                str = str + s[i];
            }
            
        }
        for(int j = 0;j<vec.size();j++)
        {
            sol = sol + vec[j] ;
            if(j!=vec.size()-1)
            {
                sol = sol + " "; 
            }
        }
       return sol; 
    }
};
