class Solution
{
public:
    int missingNumber(vector<int> &nums)
    {
        int sum = 0, max = 0, n = nums.size();
        for (int i = 0; i < n; i++)
        {
            sum += nums[i];
            if (nums[i] > max)
            {
                max = nums[i];
                ;
            };
        }
        int ans;
        ans = (max * (max + 1) / 2) - sum;
        if (ans == 0)
        {

            for (int i = 0; i < n; i++)
            {
                if (nums[i] == 0)
                {
                    return max + 1;
                }
            }
            return 0;
        }
        return ans;
    }
};