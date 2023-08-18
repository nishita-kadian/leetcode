class Solution {
public:
    int minimizeXor(int num1, int num2) {
        int setBits1 = 0;
        int setBits2 = 0;
        int N1=num1,N2=num2;
        while(num2>0 || num1>0){
            if((num2&1)==1)
                setBits2++;
            num2 = num2>>1;
            if((num1&1)==1)
                setBits1++;
            num1 = num1>>1;
        }
        if(setBits1==setBits2)
            return N1;
        if(setBits1>setBits2){
            int x = 0;
            int remove = setBits1-setBits2;
            int count = 0;
            int ans = N1;
            while(remove>0){
                if((ans&1)==1){
                    x = x|(1<<count);
                    remove--;
                }
                ans = ans>>1;
                count++;
           }
    
            return N1^x;
        }
        int add = setBits2-setBits1;
        int count = 0;
        int ans = N1;
        int x = 0;
        while(add>0){
            if((ans&1)==0){
                    x = x|(1<<count);
                    add--;
                }
               
                ans = ans>>1;
                count++;        
        }
        return N1^(x);
            
    }
};