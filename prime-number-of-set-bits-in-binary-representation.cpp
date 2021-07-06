//PRIME NUMBER OF SET BITS IN BINARY REPRESENTATION -> 07/06/2021 21:47
//https://leetcode.com/problems/prime-number-of-set-bits-in-binary-representation/submissions/
class Solution {
public:
    int ones(int x)
    {
        int one=0;
        vector<int> a;
        while(x!=0)
        {
            a.push_back(x%2);
            x=x/2;
        }
        for(int i=0; i<a.size() ; i++)
        {
            if(a[i]==1)
            {
                one++;
            }
        }
        return one;
    }
    bool prime(int y)
    {
    
        bool isPrime= true;
        if(y==1 || y==0)
        {
            isPrime = false;
            return isPrime;
        }
        if(y==2)
        {
            return isPrime;
        }
        for(int i = 2 ; i*i<=y ;i++)
        {
            if(y%i == 0)
            {
                isPrime = false;
                break;
            }
        }
        return isPrime;
    }
    
    int countPrimeSetBits(int left, int right) {
    int m =0;
    bool t= true;
    int count =0;
    for(int i = left ; i<= right ; i++)
    {
        m = ones(i);
        t = prime(m);
        
        if(t==true)
        {
            count++;
        }
        
        
    }
        return count;
    }
};
