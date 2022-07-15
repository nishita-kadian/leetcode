//COUNT PRIMES -> 07/06/2021 21:07
//https://leetcode.com/problems/count-primes/submissions/
class Solution {
public:
    int countPrimes(int n) {
        int total = 0;
        vector<bool> isPrime(n+1,true);
        if(n==2 || n==1 || n==0)
        {
            return total;
        }
        for(int i = 2 ; i*i<=n ; i++)
        {
            if(isPrime[i]==true)
            {
                for(int j = i*i ; j <=n ; j = j + i)
                {
                    isPrime[j] = false;
                }
            }
        }
        for(int i = 2 ; i<n ; i++)
        {
            if(isPrime[i]==true)
            {
                total++;
            }
        }
        return total;
    }
};
