class Solution {
public:
    int fib(int n) {
        int first=0;
        int second=1;
        int fibo=0;
        if(n==1) return 1;
        while(n-1>0)
        {
            fibo=first+second;
            first=second;
            second=fibo;
            n--;
        }
        
        return fibo;
    }
};