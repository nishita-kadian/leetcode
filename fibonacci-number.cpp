//FIBONACCI NUMBER -> 07/06/2022 20:55
//https://leetcode.com/problems/fibonacci-number/submissions/
class Solution {
public:
    unordered_map<int,int> cache;
    int fib(int n) {
        if(n==0 || n==1)
            return n;
        if(cache.find(n)!=cache.end())
            return cache[n];
        else
            return cache[n]=fib(n-1)+fib(n-2);
    }
};
