//ADD BINARY -> 01/10/2022 16:42
//https://leetcode.com/problems/add-binary/submissions/
class Solution {
public:
    string addBinary(string a, string b) {
        int size_a = a.size();
        int size_b = b.size();
        if(size_a > size_b){
            string temp = b;
            b.clear();
            for(int i =0 ; i < size_a - size_b ;i++){
                b+='0';
            } 
            b += temp;
        }
        if(size_a < size_b){
            string temp = a;
            a.clear();
            for(int i =0 ; i < size_b - size_a ;i++){
                a+='0';
            } 
            a += temp;
        }
        string ans = "";
        char carry = '0';
        bool x = false; 
        for(int  i  = a.size()-1 ; i >= 0 ; i-- ){
            if(i == 0)
                x = true;
            if(a[i] == '1'  && carry == '0' ){
               
                if(b[i] == '1'){
                    carry = '1';
                    ans+='0';
                }
                else{
                    carry = '0';
                    ans+='1';
                }
            }
            else if(a[i]=='1' && carry == '1'){
                
                if( b[i] == '1'){
                    ans+='1';
                    carry = '1' ;
                }
                else{
                    ans+='0';
                    carry = '1';
                }
                    
            }
            else if(a[i]=='0' && carry =='1'){
                if(b[i] == '1'){
                    ans+='0';
                    carry = '1';
                }
                else{
                    ans+='1';
                    carry='0';
                }
            }
            else if(a[i]=='0' && carry =='0'){
                if(b[i]=='1'){
                    ans+='1';
                    carry = '0';
                }
                else{
                    ans+='0';
                    carry = '0';
                }
            }
            if(x == true && carry =='1')
                ans+='1';
        }
      reverse(ans.begin(),ans.end());
      return ans;
    }
};
