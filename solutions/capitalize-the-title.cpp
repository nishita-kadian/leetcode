//CAPITALIZE THE TITLE -> 01/28/2022 00:17
//https://leetcode.com/problems/capitalize-the-title/submissions/
class Solution {
public:
    string capitalizeTitle(string title) {
        transform(title.begin(), title.end(), title.begin(), ::tolower);
        char ch = toupper(title[0]);
        title[0] = ch;
        for(int i = 1 ; i < title.size() ;i++){
            if(title[i]==' '){
                char x = toupper(title[i+1]);
                title[i+1] = x;
            }
        }
        string t = "";
        for(int i = 0 ; i <= title.size() ; i++){
            if(i==title.size() || title[i]==' '){
                int s = t.size();
                if(s==1 || s==2){
                    char y = tolower(title[i-s]);
                    title[i-s] = y;
                }
               
                t = "";
            }
            else
                t+=title[i];
                
        }
        return title;
    }
};
