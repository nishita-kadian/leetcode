//DECRYPT STRING FROM ALPHABET TO INTEGER MAPPING -> 11/10/2021 17:53
//https://leetcode.com/problems/decrypt-string-from-alphabet-to-integer-mapping/submissions/
class Solution {
public:
    int convertStringToInt(string str){
        // cout << "STRING: " << str << endl;
        int x;
        stringstream ss(str);
        ss >> x;
        // cout << x << endl;
        return x; 
    }
    string convertIntToString(int x){
        stringstream ss;
        ss << x;
        return ss.str();
    }
    
    string freqAlphabets(string s) {
        int n = s.size();
        string temp = "";
        int x =0;
        string ans="";
        char y;
        for(int i = 0 ; i < n; ) // i + 2 = n
        {
            if(i < n-2 && s[i+2] == '#')
            {
                temp = s.substr(i,2);
                x = convertStringToInt(temp);
                y = 96 + x;
                ans += y;
                
                i=i+3;
                temp = "";
                // cout<<ans<<endl;
            }
            else
            {
                temp = s[i];
                x = convertStringToInt(temp);
                y = 96+x;
                ans += y;
                // temp = s[i+1];
                // x = convertStringToInt(temp);
                // y = 96+x;
                // ans += y;
                // i=i+2;
                
                i++;
                temp = "";
                // cout<<ans<<endl;
                
            }
        }
        
        
    return ans;    
    }
};
