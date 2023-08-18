class Solution {
public:
    double pow(double x, long long n){
        if(n==0)
            return 1;
        
        if(n<0){
            n = -1*n;
            x = 1.0/x;
        }
        
        double ans = 1;
        while(n){
            if(n%2!=0){
                ans = ans*x;
                n--;
            }
            cout<<x<<endl;
            x = x*x;
            n = n/2;
        }
        return ans;
    }
    double myPow(double x, int n) {
        return pow(x,(long long)n);
    }
};