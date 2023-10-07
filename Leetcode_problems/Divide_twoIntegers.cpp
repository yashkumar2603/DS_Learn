class Solution
{
public:
    int divide(long int dividend, long int divisor)
    {
        if (dividend == INT_MIN && divisor == -1)
            return INT_MAX;
        if (divisor != 0)
        {
            long int n = dividend / divisor;
            return n;
        }
        return 0;
    }
};