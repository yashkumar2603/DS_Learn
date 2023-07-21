class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int n = prices.size();
        if (n <= 1)
        {
            return 0;
        }
        // finding the min.
        int min = INT_MAX;
        int start = 0;
        int max = INT_MIN;
        int ans1 = 0, ans2 = 0;
        for (int i = 0; i < n - 1; i++)
        {
            if (prices[i] < min)
            {
                min = prices[i];
                start = i;
                ans1 = prices[i];
            }
        }
        for (int i = start; i < n; i++)
        {
            if (prices[i] > max)
            {
                max = prices[i];
                ans2 = prices[i];
            }
        }
        return ans2 - ans1;
    }
};