class Solution
{
public:
    int findMaxConsecutiveOnes(vector<int> &nums)
    {
        int count = 0;
        int max_count = 0;
        int n = nums.size();

        for (int i = 0; i < n; i++)
        {
            if (nums[i] == 1)
            {
                count++;
            }
            else if (nums[i] != 1)
            {
                count = 0;
            }
            if (count > max_count)
            {
                max_count = count;
            }
        }

        return max_count;
    }
};